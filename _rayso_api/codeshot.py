#!/usr/bin/env python3

__AUTHOR__ = "DevParapalli"
__VERSION__ = "0.0.1"


from base64 import b64encode
from pathlib import Path
from time import sleep
from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
import typer
from rich import print
from os import getcwd

_COLORS = [
    "breeze",
    "candy",
    "crimson",
    "falcon",
    "meadow",
    "midnight",
    "raindrop",
    "sunset",
]

_PADDING = ["16", "32", "64", "128"]

_LANGUAGE = [
    "auto",
    "shell",
    "cpp",
    "csharp",
    "clojure",
    "coffeescript",
    "crystal",
    "css",
    "d",
    "dart",
    "diff",
    "dockerfile",
    "elm",
    "erlang",
    "fortran",
    "gherkin",
    "go",
    "groovy",
    "haskell",
    "xml",
    "java",
    "javascript",
    "json",
    "jsx",
    "julia",
    "kotlin",
    "latex",
    "lisp",
    "lua",
    "markdown",
    "mathematica",
    "octave",
    "nginx",
    "objectivec",
    "ocaml",
    "perl",
    "php",
    "powershell",
    "python",
    "r",
    "ruby",
    "rust",
    "scala",
    "smalltalk",
    "sql",
    "swift",
    "typescript",
    "twig",
    "verilog",
    "vhdl",
    "xquery",
    "yaml",
]


def main(
    filename_or_string: str,
    colors: str = _COLORS[0],
    background: str = "true",
    darkmode: str = "true",
    padding: str = _PADDING[0],
    language: str = _LANGUAGE[0],
    title: str = "",
    from_line: int = typer.Option(-1, '--from'), to_line: int = typer.Option(-1, '--to'),
    print: bool = False
):
    """Generates a code shot from a string or file.

    Args:
        --from: The line number to start from (included).
        --to: The line number to end at (included).
        print (bool, optional): Changes settings to default to the print preset (No dark, No background, 32 padding). Defaults to False.
    """
    # Custom settings for print mode
    if print:
        colors = _COLORS[0]
        background = "false"
        darkmode = "false"
        padding = _PADDING[2]
        language = _LANGUAGE[0]

    _input_as_file = Path(getcwd()) / filename_or_string

    # Logic for title if not provided.
    if (len(title) == 0 and _input_as_file.exists()):
        title = filename_or_string
    elif (len(title) == 0 and not _input_as_file.exists()):
        title = input("Enter a title for the window > ")

    if _input_as_file.exists():
        if from_line == -1 and to_line == -1:
            _input_as_bytestring = _input_as_file.read_bytes()
        elif from_line != -1 and to_line != -1:
            # -1 from start to account for index thingy
            _input_as_bytestring = b"\n".join(_input_as_file.read_bytes().splitlines()[from_line-1:to_line]) 
    else:
        _input_as_bytestring = filename_or_string.encode("utf-8")



    # Extract code from input
    code = (b64encode(_input_as_bytestring)).decode("utf-8")

    # Create the URL
    url = "https://ray.so" + \
        f"?colors={colors}&background={background}&darkMode={darkmode}&padding={padding}&title={title}&code={code}&language={language}".replace(
            "+", "%2B")
    # Open the URL in the browser

    prefs = {"download.default_directory": getcwd()}
    options = webdriver.ChromeOptions()
    options.add_argument("--headless")
    options.add_experimental_option("prefs", prefs)
    chrome = webdriver.Chrome(options=options)
    chrome.implicitly_wait(10)
    chrome.get(url)
    export_btn = WebDriverWait(chrome, 10).until(
        EC.element_to_be_clickable((By.CSS_SELECTOR, "div.button"))
    )
    action = webdriver.ActionChains(chrome).move_to_element(export_btn)
    action.perform()
    save_png_btn = WebDriverWait(chrome, 10).until(
        EC.element_to_be_clickable(
            (By.CSS_SELECTOR, "a.option:nth-child(1)"))  # 3 for clipboard
    )
    save_png_btn.click()
    file_to_check = Path(_input_as_file.__str__() + ".png")
    while not file_to_check.exists():
        sleep(0.1)
    chrome.quit()
    return 0


if __name__ == "__main__":
    """
    We will probably run it like:
    $ python main.py filename.ext 
    OR
    $ python main.py "print('Hello World')" --title "Title"

    Which means we need to have the file in the CWD.
    """
    typer.run(main)

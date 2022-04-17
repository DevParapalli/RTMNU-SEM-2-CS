# Syntax OP ?

Both C and C++ use  {} to specify scopes 

functions are defined in the following manner

C and C++

```c++
return_type function_name(v_type v_name, ...) {
    ...function definition
    return whatever;
}
```

Variables in both can be defined in the global scope using the following syntax

```c++
v_type v_name = v_value; 
```

the entry point to every program is a main function

```c++
int main() {
    ...function definition
    return 0; // Or return a error code corresponding to the error.
}
```

To pass arguments in C and C++ we redefine the main function with 2 variables

```c++

int main(int argc, char* argv[]) {
    // argc contains the numero of arguments given. argv contains the pointers to the the strings.
    // argc is always greater than 1 (argv[0] containing the invocation command)
    // 
}

```


To print to stdout in C, include `stdio.h` and then use the printf function

```c
printf("stringhere\n");
```

To print to stdout in C++ include `iostream` and then use the cout object

```c++
std::cout << "Hello World!";
```
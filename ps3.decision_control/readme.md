# Decision Control

The syntax of the if statement in C programming is:

```c++
if (test expression) 
{
   // code
}
```

A modification to this includes a statement that is executed when the expr is false

```c++
if (test expression) {
    // run code if test expression is true
}
else {
    // run code if test expression is false
}
```

Terniary Operator

This can also be used for assignment.

```c++
Expression1 ? Expression2 : Expression3
```

`Expression1` is tested, if `true`, `Expression2` is run else `Expression3` is run


The switch statement allows us to execute one code block among many alternatives.

```c++
switch (expression)
​{
    case constant1:
      // statements
      break;

    case constant2:
      // statements
      break;
    .
    .
    .
    default:
      // default statements
}
```

The `goto <label>;` statement allows us to transfer control of the program to the specified label.

```c++
goto label;
... .. ...
... .. ...
label: 
statement;
```

The use of goto statement may lead to code that is buggy and hard to follow.

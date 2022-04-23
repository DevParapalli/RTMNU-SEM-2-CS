# Conditionals Algos

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

a loop is used to repeat a block of code until the specified condition is met.

```c++
// For Loop
for (initializationStatement; testExpression; updateStatement)
{
    // statements inside the body of loop
}
```

```c++
// While Loop
while (testExpression) {
  // the body of the loop 
}
```

The do-while loop is similar to the while loop with one important difference. The body of do-while loop is executed at least once. Only then, the test expression is evaluated.

```c++
do {
  // the body of the loop
}
while (testExpression);
```

The `break;`statement ends the loop immediately when it is encountered.
The `continue;` statement skips the current iteration of the loop and continues with the next iteration.


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

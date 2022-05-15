# Loops


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

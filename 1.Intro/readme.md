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

```c++
printf("stringhere\n");
```

To print to stdout in C++ include `iostream` and then use the cout object

```c++
std::cout << "Hello World!";
```

An arithmetic operator performs mathematical operations such as addition, subtraction, multiplication, division etc on numerical values (constants and variables).

```plaintext
+    addition or unary plus
-    subtraction or unary minus
*    multiplication
/    division
%    remainder after division (modulo division)
```

An assignment operator is used for assigning a value to a variable. The most common assignment operator is =

```plaintext
Op    Example   Same as
=     a = b     a = b
+=    a += b    a = a+b
-=    a -= b    a = a-b
*=    a *= b    a = a*b
/=    a /= b    a = a/b
%=    a %= b    a = a%b
```

A relational operator checks the relationship between two operands. If the relation is true, it returns 1; if the relation is false, it returns value 0.

```plaintext
Op    Meaning                  Example
==    Equal to                 5 == 3 is evaluated to 0
>     Greater than             5 > 3 is evaluated to 1
<     Less than                5 < 3 is evaluated to 0
!=    Not equal to             5 != 3 is evaluated to 1
>=    Greater than or equal to 5 >= 3 is evaluated to 1
<=    Less than or equal to    5 <= 3 is evaluated to 0
```

An expression containing logical operator returns either 0 or 1 depending upon whether expression results true or false.

```plaintext
OP     Meaning 
&&     logical AND

||     Logical OR

!      Logical NOT
```

During computation, mathematical operations like: addition, subtraction, multiplication, division, etc are converted to bit-level which makes processing faster and saves power.

```plaintext
Op    Meaning of operators
&     Bitwise AND
|     Bitwise OR
^     Bitwise exclusive OR
~     Bitwise complement
<<    Shift left
>>    Shift right
```

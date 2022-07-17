# S&P

## Pointers

If you have a variable `var` in your program, `&var` will give you its address in the memory.

It is usually seen in the `scanf` function;

```c++
scanf("%d", &var);
```

Pointers (pointer variables) are special variables that are used to store addresses rather than values.

### Syntax 

Solo Declaration `int * p;`
Declaration with variable ` int * ptr_num, num;`
    - Here, ptr_num is an integer pointer and num is a normal integer variable.

We assign the value of a pointer in the following way

```c++
int* pc, c;
c = 5;
pc = &c;
```

To get the value of the thing pointed by the pointers, we use the `*` operator.

```cpp
int* pc, c;
c = 5;
pc = &c;
printf("%d", *pc);   // Output: 5
```

Here, the address of `c` is assigned to the `pc` pointer. To get the value stored in that address, we used `*pc`.
`pc` is a pointer, not `*pc`. You cannot and should not do something like `*pc = &c`;
Within the context of pointers, `*` is called the dereference operator.

### Working Example
```cpp
#include <stdio.h>
int main()
{
   int* pc, c;
   
   c = 22;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c);  // 22
   
   pc = &c;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); // 22
   
   c = 11;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); // 11
   
   *pc = 2;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c); // 2
   return 0;
}

/*
Address of c: 2686784
Value of c: 22

Address of pointer pc: 2686784
Content of pointer pc: 22

Address of pointer pc: 2686784
Content of pointer pc: 11

Address of c: 2686784
Value of c: 2
*/
```

`int * pc, c;` - ptr var pc and int c are created, they are not linked
`c = 22` - c is assigned the value 22
`pc = &c` - pc now points to c
`c = 11` - c is now assigned the value 11
`*pc = 2` - value at pc (the int pointed to by pc (in this case c)) is changed to 2

### Confusion ??

```cpp
int * p = &c;
```

is equivalent to 

```cpp
int *p:
p = &c;
```

## Arrays and Pointers

In C, Arrays are allocated contigous chunks of memory. The array is decayed into a pointer that increments itself by the size of its containing item. In simple words, arrays are converted into pointers.

```cpp
#include <stdio.h>
int main() {
   int x[4];
   int i;

   for(i = 0; i < 4; ++i) {
      printf("&x[%d] = %p\n", i, &x[i]);
   }

   printf("Address of array x: %p", x);

   return 0;
}
```
Running the above code presents the output as 

```plain
&x[0] = 1450734448
&x[1] = 1450734452
&x[2] = 1450734456
&x[3] = 1450734460
Address of array x: 1450734448
```
Showing that 
- 1. Address of `&x[0]` is equal to `x`.
- 2. `x[0]` is equivalent to `*x`
- 3. Similarly, `&x[1]` is equivalent to `x+1` and `x[1]` is equivalent to `*(x+1)`.

```cpp
#include <stdio.h>

void addOne(int* ptr) {
  (*ptr)++; // adding 1 to *ptr
}

int main()
{
  int* p, i = 10;
  p = &i;
  addOne(p);

  printf("%d", *p); // 11
  return 0;
}
```

Here, the value stored at `p`, `*p`, is 10 initially.

We then passed the pointer `p` to the `addOne()` function. The `ptr` pointer gets this address in the `addOne()` function.

Inside the function, we increased the value stored at `ptr` by 1 using `(*ptr)++;`. Since `ptr` and `p` pointers both have the same address, `*p` inside `main()` is also 11.


## Structures

Structures are derived variables, being a collection of variables.

Creating a struct variable can be done in 2 ways 

```cpp
struct Person {
  // code
};

int main() {
  struct Person person1, person2, p[20];
  return 0;
}
```
OR
```cpp
struct Person {
   // code
} person1, person2, p[20];
```

However, in both cases
 - `person1` and `person2` are `struct Person` variables
 - `p[]` is a `struct Person` array of size 20.

There are two types of operators used for accessing members of a structure.

- `. ` - Member operator
- `->` - Structure pointer operator

Suppose, you want to access the `salary` of `person2`.
`person2.salary`

Example

```cpp
#include <stdio.h>
#include <string.h>

// create struct with person1 variable
struct Person {
  char name[50];
  int citNo;
  float salary;
} person1;

int main() {

  // assign value to name of person1
  strcpy(person1.name, "DevParapalli");

  // assign values to other person1 variables
  person1.citNo = 2003;
  person1. salary = 10000;

  // print struct variables
  printf("Name: %s\n", person1.name);
  printf("Citizenship No.: %d\n", person1.citNo);
  printf("Salary: %.2f", person1.salary);

  return 0;
}

/*
Name: DevParapalli
Citizenship No.: 2003
Salary: 10000.00
*/
```

We needed to use strcpy to put the data in due to the fact that `char` arrays cannot be assigned to.

We can use typedef to create an alias for structs.


```cpp
struct Distance{
  int feet;
  float inch;
};

int main() {
  struct Distance d1, d2;
}
```
is equivalent to
```cpp
typedef struct Distance {
  int feet;
  float inch;
} distances;

int main() {
  distances d1, d2;
}
```

You can create nested structs

```cpp
struct complex {
  int imag;
  float real;
};

struct number {
  struct complex comp;
  int integers;
} num1, num2;
```

When a pointer to a struct (usually in an array or when passed by reference) is available, we can access the members using the `->` operator.

```cpp
#include <stdio.h>
struct person
{
   int age;
   float weight;
};

int main()
{
    struct person *personPtr, person1;
    personPtr = &person1;   

    printf("Enter age: ");
    scanf("%d", &personPtr->age);

    printf("Enter weight: ");
    scanf("%f", &personPtr->weight);

    printf("Displaying:\n");
    printf("Age: %d\n", personPtr->age);
    printf("weight: %f", personPtr->weight);

    return 0;
}
```

- `personPtr->age` is equivalent to `(*personPtr).age`
- `personPtr->weight` is equivalent to `(*personPtr).weight`

You can pass structs into functions similarly as normal or array variables.

```cpp
#include <stdio.h>
struct student {
   char name[50];
   int age;
};

// function prototype
void display(struct student s);

int main() {
   struct student s1;

   printf("Enter name: ");

   // read string input from the user until \n is entered
   // \n is discarded
   scanf("%[^\n]%*c", s1.name);

   printf("Enter age: ");
   scanf("%d", &s1.age);

   display(s1); // passing struct as an argument

   return 0;
}

void display(struct student s) {
   printf("\nDisplaying information\n");
   printf("Name: %s", s.name);
   printf("\nAge: %d", s.age);
}
```

However the best use of structs is to return multiple values from a function

```cpp
#include <stdio.h>
struct student
{
    char name[50];
    int age;
};

// function prototype
struct student getInformation();

int main()
{
    struct student s;

    s = getInformation();

    printf("\nDisplaying information\n");
    printf("Name: %s", s.name);
    printf("\nRoll: %d", s.age);
    
    return 0;
}
struct student getInformation() 
{
  struct student s1;

  printf("Enter name: ");
  scanf ("%[^\n]%*c", s1.name);

  printf("Enter age: ");
  scanf("%d", &s1.age);
  
  return s1;
}	
```
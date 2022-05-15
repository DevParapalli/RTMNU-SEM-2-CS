# 1D Arrays

An array is a variable that can store multiple values. For example, if you want to store 100 integers, you can create an array for it.

```c++
int data[100];
```

## How to declare an array?

```c++
dataType arrayName[arraySize];
```

For Example,

```c++
float mark[5];
```

It's important to note that the size and type of an array cannot be changed once it is declared.

## Access Array Elements
You can access elements of an array by indices.

Suppose you declared an array mark as above. The first element is `mark[0]`, the second element is `mark[1]` and so on.

#### Few keynotes:

Arrays have 0 as the first index, not 1. In this example, mark[0] is the first element.
If the size of an array is n, to access the last element, the n-1 index is used. In this example, mark[4]
Suppose the starting address of mark[0] is 2120d. Then, the address of the mark[1] will be 2124d. Similarly, the address of mark[2] will be 2128d and so on.
This is because the size of a float is 4 bytes.

## How to initialize an array?
It is possible to initialize an array during declaration. For example,

```c++
int mark[5] = {19, 10, 8, 17, 9};
```

You can also initialize an array like this.

```c++
int mark[] = {19, 10, 8, 17, 9};
```

Here, we haven't specified the size. However, the compiler knows its size is 5 as we are initializing it with 5 elements.

## Change Value of Array elements

```c++
int mark[5] = {19, 10, 8, 17, 9}

// make the value of the third element to -1
mark[2] = -1;

// make the value of the fifth element to 0
mark[4] = 0;
```

## Input and Output Array Elements

Here's how you can take input from the user and store it in an array element.
```c++
// take input and store it in the 3rd element
​scanf("%d", &mark[2]);

// take input and store it in the ith element
scanf("%d", &mark[i-1]);
```

Here's how you can print an individual element of an array.

```c++
// print the first element of the array
printf("%d", mark[0]);

// print the third element of the array
printf("%d", mark[2]);

// print ith element of the array
printf("%d", mark[i-1]);
```

## Access elements out of its bound!
Suppose you declared an array of 10 elements. Let's say,
```c++
int testArray[10];
```

You can access the array elements from `testArray[0]` to `testArray[9]`.

Now let's say if you try to access `testArray[12]`. The element is not available. This may cause unexpected output (undefined behavior). Sometimes you might get an error and some other time your program may run correctly.

## Addition of an element

```c++
/* 
Create a new array (with len + 1 items), fill the elements till before that index, add the element, then add the rest of the elements from the original array.
*/
```

OR 

Create a bigger than required list, Note the numero of elements filled, 

get new element value, and index to insert

move all elements after index to index+1 

ie, if element to add is @`6` then move `fill - 1` to `fill`, `fill - 2` to `fill - 1`

```c++
   for (c = len - 1; c > ins_pos - 1; c--)
      array[c+1] = array[c];
```

then assign the element to `array[ins_pos]`

increment the length of the array.

## Deletion of element

Get Removal Index

Move all elements after rem_pos to i-1;

```c++
    for (c = rem_pos;c < arr_len;c++) {
        array[c] = array[c + 1];
    }

```



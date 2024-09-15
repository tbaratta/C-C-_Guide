# C/C++ Guide

## Arrays in C
**Definition:**

An array is a data structure that stores multiple pieces of the same data in contiguous memory locations.

**Beginner's Definition:**

An array is like a box with slots. Each slot holds a value of the same datatype, such as a character or an integer. All the slots are lined up in a row, and each one has a number, called an index, to help you find it easily. You can declare the size of the box when you create it and assign values to each slot using these indices.

**Notes:**

- Arrays in C have a fixed size once declared and cannot have its size changed without using dynamic memory allocation.
  
- Arrays in C are zero-indexed, meaning the first element will be located at index 0.

- Arrays in C can have more than one dimension, like 2D arrays commonly used for storing tables of data.

**Practice Assignment:** Basic Array Operations (See basic_array_operations.c for solution)

Write a C program that performs the following tasks with a one-dimensional array:

- Declare an array of integers with a size of 5.
- Input 5 integer values from the user and store them in the array.
- Display the array.
- Find and print the largest and smallest element in the array.


## Pointers in C
**Definition:**

A pointer in C is a variable that stores the memory address of another variable. Pointers allow direct access and manipulation of memory locations, which can be useful for dynamic memory allocation, passing variables by reference, and optimizing performance.

**Beginner's Definition:**

A pointer is like a signpost that tells you where something is stored in your computer's memory. Instead of holding a value directly (like an integer or a character), a pointer holds the address of a value. It's like knowing the exact location of a house on a street, rather than knowing what's inside the house.

**Notes:**

- Declaring a Pointer: Pointers are declared using the * symbol. Example: int *p; declares a pointer to an integer.
Address-of Operator &: You can get the memory address of a variable using the & operator. Example: p = &x; assigns the address of x to the pointer p.

- Dereferencing *: Dereferencing a pointer means accessing the value at the memory address stored by the pointer. Example: *p = 10; assigns the value 10 to the variable p points to.

- Null Pointers: Pointers should be initialized before use. A common practice is to assign NULL to a pointer when it's not pointing to any valid memory location.
  
**Practice Assignment:** Pointer and Array Operations (See pointer_array_operations.c for solution)

Write a C program that performs the following tasks with a one-dimensional array and pointers:

- Declare an array of integers with a size of 5.
- Declare a pointer to the array using the dereference operator.
- Instruct the user to input 5 values to the array.
- Print the array in reverse order using pointer arithmetic
- Calculate the sum using pointer arithemtic.



#include <stdio.h>

int main() {
    int arr[5];
    int *ptr = arr; // pointer to the start of the array (first index)
    int sum = 0;

    // inputting values into the array
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // printing array elements in reverse order
    // looping from the end of the array (4th index) and decrementing to reverse given array
    // (ptr + i) has the pointer point to each index[i] in the given array
    // example: ptr points to arr[0] so ptr + 4 points to arr[4]
    // using * (dereference operator) to get the value the pointer is pointing at (arr)
    printf("\nArray elements in reverse order:\n");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    // calculating the sum of all elements using pointer arithmetic
    for (int i = 0; i < 5; i++) {
        sum += *(ptr + i);
    }

    // printing the sum
    printf("\nSum of all elements: %d\n", sum);

    return 0;
}

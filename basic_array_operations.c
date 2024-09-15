#include <stdio.h>

int main() {

    int arr[5];

    // asking the user for an element in each index of our array
    for(int i = 0; i < 5; i++) {
        printf("Enter an integer for index %d:\n", i);
        scanf("%d", &arr[i]);
    }

    // printing each element in the user's array
    printf("\nDisplaying Array...\n");
    for(int i = 0; i < 5; i++) {
        printf("[%d]", arr[i]);
    }

    // initializing max and min
    int max = arr[0];
    int min = arr[0];

    // finding max and min by comparing each index to max and min
    // starting with index 1 since we initialized max and min to index 0
    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("\n\nThe largest number in your given array is %d\n", max);
    printf("\nThe smallest number in your given array is %d\n", min);

    return 0;
}

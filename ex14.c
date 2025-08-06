#include <stdio.h>

// Function to find maximum value in array
int findMax(int arr[], int size) {
    int max = arr[0];
    int i;
    
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to print array elements
void printArray(int arr[], int size) {
    int i;
    printf("Array elements: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int numbers[] = {45, 23, 67, 12, 89, 34, 56};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int maximum;
    
    printf("Array and Function Example\n");
    printf("=========================\n");
    
    printArray(numbers, size);
    
    maximum = findMax(numbers, size);
    printf("Maximum value in array: %d\n", maximum);
    
    return 0;
}
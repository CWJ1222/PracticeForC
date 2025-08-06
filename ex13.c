#include <stdio.h>

int main() {
    int i;
    int sum = 0;
    
    printf("Sum of numbers from 1 to 10:\n");
    
    for (i = 1; i <= 10; i++) {
        sum += i;
        printf("%d ", i);
    }
    
    printf("\nTotal sum: %d\n", sum);
    
    return 0;
}
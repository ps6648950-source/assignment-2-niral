#include <stdio.h>

int main() {
    int numbers[100];
    int largest, smallest;

    printf("Enter 100 numbers:\n");
    for(int i = 0; i < 100; i++) {
        scanf("%d", &numbers[i]);
    }

    largest = smallest = numbers[0];


    for(int i = 1; i < 100; i++) {
        if(numbers[i] > largest) {
            largest = numbers[i];
        }
        if(numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    printf("Largest number = %d\n", largest);
    printf("Smallest number = %d\n", smallest);

    return 0;
}


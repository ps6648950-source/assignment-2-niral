#include <stdio.h>

int main() {
    int numbers[200];
    int positive , negative , zero ;


    printf("Enter 200 numbers:\n");
    for(int i = 0; i < 200; i++) {
        scanf("%d", &numbers[i]);


        if(numbers[i] > 0) {
            positive++;
        } else if(numbers[i] < 0) {
            negative++;
        } else {
            zero++;
        }
    }


    printf("Positive numbers = %d\n", positive);
    printf("Negative numbers = %d\n", negative);
    printf("Zero numbers = %d\n", zero);

    return 0;
}

#include <stdio.h>
int main() {
    int num, square, temp, digits = 1, divisor;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;
    temp = num;


    divisor = 1;
    while (temp > 0) {
        divisor *= 10;
        temp /= 10;
    }


    if (square % divisor == num) {
        printf("%d is an automorphic number.\n", num);
    } else {
        printf("%d is not an automorphic number.\n", num);
    }

    return 0;
}

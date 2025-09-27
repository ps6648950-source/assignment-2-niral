#include <stdio.h>

int main() {
    int num, a;

    printf("Enter a number: ");
    scanf("%d", &num);

   a = num;
    printf("Digits of %d are: ", num);


    int divisor = 1;
    while (a/ divisor >= 10) {
        divisor *= 10;
    }


    while (divisor > 0) {
        int digit =a / divisor;
        printf("%d ", digit);
        a = a % divisor;
        divisor = divisor / 10;
    }

    return 0;
}

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits in reverse order: ");

    while (num > 0) {
        int digit = num % 10;
        printf("%d. ", digit);
        num = num / 10;
    }

    return 0;
}

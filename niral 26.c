#include <stdio.h>

int main() {
    int num, original, sum = 0, n = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    if (num < 0) {
        num = -num;
    }

    int temp = num;


    while (temp > 0) {
        temp = temp / 10;
        n++;
    }

    temp = num;

    while (temp > 0) {
        int digit = temp % 10;
        int power = 1;

        for (int i = 1; i <= n; i++) {
            power *= digit;
        }

        sum += power;
        temp = temp / 10;
    }

    if (sum == (original < 0 ? -original : original)) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}

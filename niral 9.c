#include <stdio.h>

int main() {
    int n, sum, i;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum = (2 * i);
    }

    printf("Sum of first %d even numbers = %d\n", n, sum);

    return 0;
}

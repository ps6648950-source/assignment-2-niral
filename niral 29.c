#include <stdio.h>
int main() {
    int n, i, flag;

    printf("Enter a number:");
    scanf("%d", &n);

    if(n <= 1) {
        printf("%d is NOT a Prime Number.\n", n);
    } else {
        for(i = 2; i <= n/2; i++) {
            if(n % i == 0) {
                flag = 1;
                break;
            }
        }

        if(flag == 0) {
            printf("%d is a Prime Number.\n", n);
        } else {
            printf("%d is NOT a Prime Number.\n", n);
        }
    }

    return 0;
}

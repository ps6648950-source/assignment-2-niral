#include <stdio.h>

int main() {
    int n, sum = 0;
    float mean;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    int numbers[n];

    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    mean = sum / (float)n;

    printf("Sum = %d\n", sum);
    printf("Mean = %.2f\n", mean);

    return 0;
}

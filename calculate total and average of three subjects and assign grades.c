#include <stdio.h>
int main() {
    int sub1, sub2, sub3;
    int total;
    float avg;

    printf("Enter marks for three subjects: ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);
    if (sub1 <= 35 || sub2 <= 35 || sub3 <= 35) {
        printf("Result: Fail (due to marks <= 35 in a subject)\n");
    } else {

        total = sub1 + sub2 + sub3;
        avg = total / 3.0;

        printf("Total Marks: %d\n", total);
        printf("Average Marks: %.2f\n", avg);
        if (avg > 70) {
            printf("Grade: Distinction\n");
        } else if (avg >= 60) {
            printf("Grade: First Class\n");
        } else if (avg >= 50) {
            printf("Grade: Second Class\n");
        } else if (avg >= 35) {
            printf("Grade: Third Class\n");
        } else {
            printf("Grade: Fail\n");
        }
    }

    return 0;
}

#include <stdio.h>

int main() {
    char sex;
    int boys , girls ;

    printf("Enter sex code for 50 students (M for boy, F for girl):\n");

    for(int i = 1; i <= 50; i++) {
        printf("Student %d: ", i);
        scanf(" %c", &sex);

        if(sex == 'M' || sex == 'm') {
            boys++;
        } else if(sex == 'F' || sex == 'f') {
            girls++;
        } else {
            printf("Invalid input! Please enter M or F.\n");
            i--;
        }
    }

    printf("Number of boys = %d\n", boys);
    printf("Number of girls = %d\n", girls);

    return 0;
}

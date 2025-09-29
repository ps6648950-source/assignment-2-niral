#include <stdio.h>
int main() {
    float grossSalary, allowance, deduction, netSalary;

    printf("Enter Gross Salary: ");
    scanf("%f", &grossSalary);


    if(grossSalary > 10000) {
        allowance = 0.10 * grossSalary;
        deduction = 0.03 * grossSalary;
    }
    else if(grossSalary > 5000) {
        allowance = 0.07 * grossSalary;
        deduction = 0.02 * grossSalary;
    }
    else {
        allowance = 0;
        deduction = 0;
    }
    netSalary = grossSalary + allowance - deduction;
    printf("Net Salary: %.2f\n", netSalary);

    return 0;
}

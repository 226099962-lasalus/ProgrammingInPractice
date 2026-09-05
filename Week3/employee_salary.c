#include <stdio.h>

int main() {
    double basicSalary;
    double housingAllowance;
    double transportAllowance;
    double tax;
    double grossSalary;
    double netSalary;

    printf("Enter employee basicSalary:\n");
    scanf("%lf", &basicSalary);

    printf("Enter employee housingAllowance:\n");
    scanf("%lf", &housingAllowance);

    printf("Enter employee transportAllowance:\n");
    scanf("%lf", &transportAllowance);

    printf("Enter employee tax:\n");
    scanf("%lf", &tax);

    grossSalary = basicSalary + housingAllowance + transportAllowance;
    netSalary = grossSalary - tax;

    printf("\n Employee grossSalary: %.2f\n", grossSalary);
    printf("\n Employee netSalary: %.2f\n", netSalary);

    return 0;

}


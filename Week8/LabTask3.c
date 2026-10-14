#include <stdio.h>

//Defining Function
float calculateSalary(float basic, float housing, float transport) {
    return basic + housing + transport;
}

int main() {
    //Used examples
    float basic = 15000.00;
    float housing = 3000.00;
    float transport = 2000.00;

    float grossSalary = calculateSalary(basic,housing, transport);

    printf("Gross Salary: %.2f\n", grossSalary);

    return 0;
}


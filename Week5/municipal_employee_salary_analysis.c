#include <stdio.h>

int main() {
    double salary;
    double totalSalary = 0;
    double highestSalary = 0;
    double lowestSalary = 0;
    double averageSalary = 0;
    

    for (int i = 0; i < 50; i++) {
        printf("Enter the salary of the employee %d:\n",i + 1);
        scanf("%lf", &salary);

        totalSalary += salary;


        if (i == 0) {
            highestSalary = salary;
            lowestSalary = salary;
        }
        if (salary > highestSalary) {
            highestSalary = salary;
        } else if (salary < lowestSalary) {
            lowestSalary = salary;
        }
        
        averageSalary = totalSalary / 50;

        printf("\n--- Salary Analysis ---\n");
        printf("Average salay:%.2lf\n", averageSalary);
        printf("Highest salary:%.2lf\n",highestSalary);
        printf("Lowest salary:%.2lf\n",lowestSalary);
    }

        return 0;
    }

        

        
    


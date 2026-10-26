#ifndef EMPLOYEE_H
#define EMPLOYEE_H

//Week 1 Function
void manageMunicipality(void);

//Week 3 function
void manageEmployeeSalary(void);

float calculateSalary(float basic, float housing, float transport);
int searchEmployee(int searchID, int Array[], int arraySize);
void displayMenu();
float calculateVAT(float amount);
float calculateSalary(float basic, float housing, float transport);
float calculateBudget(float revenue, float expenses);
void searchEmployeeID();

#endif
#include <stdio.h> 
#include "employee.h"

void manageMunicipality(void){
char municipality[50]; 
char mayor[50]; 
int population; 

printf("Municipal Financial Management System\n\n"); 

printf("Enter Municipality Name: "); 
scanf(" %[^\n]s", municipality);

printf("Enter Mayor: ");
scanf(" %[^\n]s", mayor);

printf("Enter Population: "); 
scanf("%d", &population); 

printf("\n---------------------------------\n"); 
printf("Municipality : %s\n", municipality); 
printf("Mayor        : %s\n", mayor); 
printf("Population   : %d\n", population); 
} 
//=========================================
//WEEK 3 CODE LIVES HERE
//=========================================
void manageEmployeeSalary(void) {
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

}


int searchEmployee(int searchID, int Array[], int arraySize){
    int i;
    for ( i =0; i < arraySize; i++){
        if (Array[i]==searchID){
            return i;
        }
    }
    return -1;
}
float calculateVAT(float amount){
    return amount * 0.15;
}

//Function to calculate total salary
float calculateSalary(float basic, float housing, float transport){
    return basic + housing +transport;
}

//Function to simulate searching for an emlployee ID
void searchEmployeeID(){
    int empID;
    //Mock array of employee IDs for an employee ID
    int employeeDatabase[5] = {101, 102, 103, 104, 105};
    int foundIndex = -1;

    printf("Enter employee ID:");
    scanf("%d", &empID);

    int i;

    for ( i = 0; i < 5; i++){
        if (employeeDatabase[i] == empID){
            foundIndex = i;
            break;
        }
    }
    if (foundIndex != -1){
        printf("Employee found at position %d.\n\n", foundIndex);
    } else {
        printf("Employee ID %d not found.\n\n", empID);
    }
}


#include <stdio.h>

//Fuction Prototypes
void displayMenu();
float calculateVAT(float amount);
float calculateSalary(float basic, float housing, float transport);
float calculateBudget(float revenue, float expenses);
void searchEmployee();

int main() {
    int choice;
    float amount, basic, housing, transport, revenue, expenses;

    do {
        displayMenu();
        printf("Enter your choice:");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
            printf("\n--- Calculate VAT ---\n");
            printf("Enter amount:");
            scanf("%f", &amount);
            printf("Calculated VAT (15%%): %.2f\n\n", calculateVAT(amount));
            break;

            case 2:
            printf("\n--- Calculate Salary ---\n");
            printf("Enter Basic Salary:");
            scanf("%f", &basic);

            printf("Enter Housing Allowance:");
            scanf("%f", &housing);

            printf("Enter Transport Allowance:");
            scanf("%f", &transport);

            printf("Total Salary: %.2f\n\n", calculateSalary(basic, housing, transport));
            break;

            case 3:
            printf("\n--- Calculate Budget ---\n");
            printf("Enter Revenue and Expenses: ");
            scanf("%f %f", &revenue, &expenses);
            printf("Remaining Budget Balance: %.2f\n\n", calculateBudget(revenue, expenses));
            break;

            case 4:
            printf("\n--- Search Employee ---\n");
            searchEmployee();
            break;

            case 5:
            printf("Exiting the system. See yah!\n");
            break;

            default:
            printf("Invald choice! Please try again.\n\n");
        }
    } while (choice != 5);

    return 0;
}

//Function to calculate VAt
float calculateVAT(float amount) {
    return amount * 0.15;
}

//Function to calculate total salary
float calculateSalary(float basic, float housing, float transport){
    return basic + housing +transport;
}

//Function to calculate budget
float calculateBudget(float revenue, float expenses){
    return revenue - expenses;
}

//Function to simulate searching for an emlployee ID
void searchEmployee(){
    int empID;
    //Mock array of employee IDs for an employee ID
    int employeeDatabase[5] = {101, 102, 103, 104, 105};
    int foundIndex = -1;

    printf("Enter employee ID:");
    scanf("%d", &empID);

    for (int i = 0; i < 5; i++){
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
    //Place the function body here
    void displayMenu(){
        printf("==== MFMS MENU ====\n");
        printf("1. Calculate VAT\n");
        printf("2. Calculate Salary\n");
        printf("3. Calculate Budget\n");
        printf("4. Search Employee\n");
        printf("5. Exit\n");
        printf("===================\n");
    }



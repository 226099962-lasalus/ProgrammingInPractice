#include <stdio.h>
#include <string.h>
#include "records.h"

void addEmployee(Employee arr[], int *count){
    if (*count >= MAX_RECORDS){
        printf("Error: Employee array is full.!\n");
        return ;
    }
    printf("\n--- Add Employee ---\n");
    printf("Enter ID: "); scanf("%d", &arr[*count].id);
    printf("Enter Name: "); scanf(" %[^\n]s", arr[*count].name);
    printf("Enter Department: "); scanf(" %[^\n]s", arr[*count].department);
    printf("Enter Salary:"); scanf("%lf", &arr[*count].salary);

    (*count)++;
    printf("Employee added successfully!\n");
}

void displayEmployees(Employee arr[], int count){
    printf("\n%-10s %-21s %-21s %-10s\n", "ID", "Name", "Department", "Salary");
    printf("-------------------------------------------------------------\n");
    for (int i = 0; i < count; i++){
        printf("%-10d %-21s %-21s %-10.2f\n", arr[i].id, arr[i].name, arr[i].department, arr[i].salary);
    }
}

void addSupplier(Supplier arr[], int *count){
    if (*count >= MAX_RECORDS) {printf("Array Full!\n"); return; }
    printf("\n--- Add Supplier ---\n");
    printf("Enter ID:"); scanf("%d", &arr[*count].id);
    printf("Enter Name: "); scanf(" %[^\n]s", arr[*count].name);
    printf("Enter Email: "); scanf(" %[^\n]s", arr[*count].email);
    printf("Enter Phone: "); scanf(" %[^\n]s", arr[*count].phone);
    printf("Enter Town: "); scanf(" %[^\n]s", arr[*count].town);
    (*count)++;
}

void displaySuppliers(Supplier arr[], int count){
    printf("\n%-10s %-21s %-21s\n", "ID", "Supplier Name", "Email", "Phone", "Town");
        printf("-------------------------------------------------------------\n");
        for (int i = 0; i < count; i++){
            printf("%-10d %-21s %21s %-21s %-10s\n", arr[i].id, arr[i].name, arr[i].email, arr[i].phone, arr[i].town);
        }
}

void addAsset(Asset arr[], int *count){
    if (*count >= MAX_RECORDS){ printf("Array full!\n"); return;}
    printf("\n--- Add Asset ---\n");
    printf("Enter ID: "); scanf("%d", &arr[*count].id);
    printf("Enter Description: "); scanf(" %[^\n]s", arr[*count].description);
    printf("Enter Value: "); scanf("%lf", &arr[*count].value);
    printf("Enter Acquired Date (DD MM YYYY): "); scanf("%d %d %d", &arr[*count].acquired.day, arr[*count].acquired.month, &arr[*count].acquired.year);
    (*count)++;
    }

    void displayAssets(Asset arr[], int count){
        printf("\n%-10s %-21s %-10s %-15s\n", "ID", "Description", "Value", "Acquired Date");
        printf("-------------------------------------------------------------\n");
        for(int i = 0; i < count; i++){
            printf("%-10d %-21s %-10.2f %02d/%02d/%04d\n", arr[i].id, arr[i].description, arr[i].value, arr[i].acquired.day, arr[i].acquired.month, arr[i].acquired.year);
        }
    }

    void addBudget(Budget arr[], int *count){
        if (*count >= MAX_RECORDS){printf("Array Full!\n"); return;}
        printf("\n--- Add Budget ---\n");
        printf("Enter Department:"); scanf("%d", &arr[*count].department);
        printf("Enter Allocated Amount: "); scanf("%lf", &arr[*count].allocated);
        printf("Enter Spent Amount: "); scanf("%lf", &arr[*count].spent);
        (*count)++;
    }

    void displayBudgets(Budget arr[], int count){
        printf("\n%-21s %-15s %-15s\n", "Department", "Allocated", "Spent");
        printf("-------------------------------------------------------------\n");
        for(int i = 0; i < count; i++){
            double remaining = arr[i].allocated - arr[i].spent;
            printf("%-12s %-15.2f %-15.2f %-15.2f\n", arr[i].department, arr[i].allocated, arr[i].spent, remaining);
        }
        
    }

    void addProject(Project arr[], int *count){
        if (*count >= MAX_RECORDS){printf("Array Full!\n"); return;}
        printf("\n--- Add Project ---\n");
        printf("Enter ID: "); scanf("%d", &arr[*count].id);
        printf("Enter Title: "); scanf(" %[^\n]s", arr[*count].title);
        printf("Enter Budget: "); scanf("%lf", &arr[*count].budget);
        printf("Enter Start Date (DD MM YYYY): "); scanf("%d %d %d", &arr[*count].startDate.day, &arr[*count].startDate.month, &arr[*count].startDate.year);
        printf("Enter End Date (DD MM YYYY): "); scanf("%d %d %d", &arr[*count].endDate.day, &arr[*count].endDate.month, &arr[*count].endDate.year);
        (*count)++;
    }

    void displayProjects(Project arr[], int count){
        printf("\n%-10s %-21s %-10s %-15s %15s\n", "ID", "Title", "Budget", "Start Date", "End Date");
        printf("-------------------------------------------------------------\n");
        for(int i = 0; i < count; i++){
            printf("%-10d %-21s %-10.2f %02d/%02d/%04d %02d/%02d/%04d\n", arr[i].id, arr[i].title, arr[i].budget, arr[i].startDate.day, arr[i].startDate.month, arr[i].startDate.year, arr[i].endDate.day, arr[i].endDate.month, arr[i].endDate.year );
        }
    }

    void saveEmployeesBinary(Employee arr[], int count ){
        FILE *fp = fopen("employees.dat", "wb");
        if (fp == NULL){
            fwrite(arr, sizeof(Employee), count, fp);
            fclose(fp);
        }
    }

    int loadEmployeesBinary(Employee arr[]){
        FILE *fp = fopen("employees.dat", "rb");
        if (fp == NULL) return 0;
        int count = 0;
        while (fread(&arr[count], sizeof(Employee), 1, fp) == 1){
            count++;
        }
        fclose(fp);
        return count;
    }


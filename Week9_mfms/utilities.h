#ifndef UTILITIES_H
#define UTILITIES_H

#define MAX_SUPPLIERS 50
#define MAX_NAME_LEN 100

struct Supplier {
    char name[MAX_NAME_LEN];
};

void runWeek6System(void);
void searchSupplier(void);
void backupSupplierName(void);
void buildSupplierDescription(void);
void manageSupplierMenu(void);
float calculateVAT(float amount);
void displayMenu(void);
float calculateVAT(float amount);

#endif
#ifndef REPORTS_H
#define REPORTS_H

//Keeping every existing code here

void manageTenderEvaluation(void);
void analyzeEmployeeSalaries(void);
void manageSupplierDetails(void);
void displaySupplierStringLengths(void);
void saveReportsText(char logs[][100], int count);
int loadReportsText(char logs[][100], int maxCount);

#endif
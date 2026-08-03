#include <stdio.h>

int main() {
    char municipality[50];
    char mayor[50];
    int population;

    printf("Municipal Financial Managament System\n\n");

    printf("Enter Municipal Name:");
    scanf(" %[^\n]s", municipality);

    printf("Enter Mayor:");
    scanf(" %[^\n]s", mayor);

    printf("Enter Population:");
    scanf("%d", &population);

    printf("|n--------------------------\n");
    printf("Municipality : %s\n", municipality);
    printf("Mayor   :%s\n", mayor);
    printf("Population  :%d\n",population);

    return 0;

}
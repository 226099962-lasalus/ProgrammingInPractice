#include <stdio.h>

//Create Functions
int searchEmployee(int searchID, int Array[], int arraySize){
    for (int i =0; i < arraySize; i++){
        if (Array[i]==searchID){
            return i;
        }
    }
    return -1;
}

int main(){
    //Declare Variables
    int Employees[] = {1001, 1002, 1003, 1004, 1005};
    int searchID = 0;

    //Ask the User to serach
    printf("Search for employee ID: ");
    scanf("%d", &searchID);
     
    // Call the Functions
    int index= searchEmployee(searchID, Employees, 5);

    //Display the index of the Employee
    printf("Employee can be found at index: %d", index);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct employee {
    char name[10];
    int hireDate;
    float salary;
};

int main() {
    

    struct employee secondEmployee;
    printf("What is the name of the employee?: \n");
    scanf("%s", secondEmployee.name);

    printf("What is the hire date of the employee?: \n");
    scanf("%d", &secondEmployee.hireDate);

    printf("What is the salary of the employee?: \n");
    scanf("%f", &secondEmployee.salary);


    printf("\nThe name of the employee is %s, the hiredate of the employee is %d, and the dalary of the employee is $%.2f!", secondEmployee.name, secondEmployee.hireDate, secondEmployee.salary);

    return 0;
}
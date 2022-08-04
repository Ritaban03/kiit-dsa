#include <stdio.h>

typedef struct
{
    int id;
    char name[32];
    char department[64];
    float salary;
} employees;

int main()
{
    employees employee1, *ptr;
    ptr = &employee1;

    printf("Enter employee id:");
    scanf("%d", &ptr->id);

    printf("Enter employee name:");
    scanf("%s", &ptr->name);

    printf("Enter employee department:");
    scanf("%s", &ptr->department);

    printf("Enter employee salary:");
    scanf("%f", &ptr->salary);

    printf("\nThe employee id is %d \n", ptr->id);
    printf("The employee name is %s \n", ptr->name);
    printf("The employee department is %s \n", ptr->department);
    printf("The employee salary is %.2f \n", ptr->salary);
}
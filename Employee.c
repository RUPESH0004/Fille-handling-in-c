#include <stdio.h>

typedef struct Employee
{
    // fields
    int eid;
    char name[25];
    double salary;

} emp;

int main()
{
    FILE *fptr;
    fptr = fopen("employees.txt", "a");
    char temp;
    emp employees[5];
    int i;
    for (i = 0; i < 5; i++)
    {

        printf("Please enter your id: ");
        scanf("%d", &employees[i].eid);
        scanf("%c", &temp);
        printf("Please enter your name: ");
        gets(employees[i].name);
        printf("Please enter your salary: ");
        scanf("%lf", &employees[i].salary);
    }
    for (i = 0; i < 5; i++)
    {

        fprintf(fptr, "~~Employee~~\n");
        fprintf(fptr, "Name: %s\n", employees[i].name);
        fprintf(fptr, "EID: %d\n", employees[i].eid);
        fprintf(fptr, "Salary: %lf\n", employees[i].salary);
    }
 free(fptr);
  return 0;
    
}
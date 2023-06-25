/*C program to implement structures
OBJ.: Enter the detail of 5 employees such as name, id, experience, salary and print them*/
#include <stdio.h>
#include <string.h>
struct employee
{
    char name[40];
    int id;
    char exp[40];
    int sal;
}e[100];
int main()
{
    int n, i;
    // x is the number of employee
    printf("Enter the number of employee: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", &e[i].name);
        printf("\nEnter id of employee %d: ", i + 1);
        scanf("%d", &e[i].id);
        printf("\nEnter experience of employee %d: ", i + 1);
        scanf("%s", &e[i].exp);
        printf("\nEnter salary of employee %d: ", i + 1);
        scanf("%d", &e[i].sal);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nName of employee %d: %s", i + 1, e[i].name);
        printf("\nId of employee %d: %d", i + 1, e[i].id);
        printf("\nExperience of employee %d: %s", i + 1, e[i].exp);
        printf("\nSalary of employee %d: %d", i + 1, e[i].sal);
    }
    return 0;
}
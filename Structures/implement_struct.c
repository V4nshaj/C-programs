/*C program to implement structures
OBJ.: Enter the detail of students such as name, e-mail, marks of 3 subjects
*/
#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    char mail[20];
    float marks[3];
};
int main()
{
    struct student s1;
    printf("Enter your name: ");
    gets(s1.name);
    printf("\nEnter your email: ");
    gets(s1.mail);
    for(int i=0;i<3;i++)
    {

        printf("\nEnter marks of subject %d: ", i+1);
        scanf("%f", &s1.marks[i]);
    }
    printf("\nName: %s", s1.name);
    printf("\nEmail: %s", s1.mail);
    for(int i=0;i<3;i++)
    {
        printf("\nMarks of subject %d: %f", i+1, s1.marks[i]);
    }
    return 0;
}


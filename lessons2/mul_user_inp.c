#include<stdio.h>
int main()
{   //garbage value->means when a compiler allocates memory to a particular variable at that mem some value is prsnt
    int n1,n2,n3,sum;//so if initialise with 0 so not to hav a garbage value it shld be initialized as well as it is a good prac
    printf("Enter three number ");
    scanf("%d %d %d", &n1, &n2, &n3);//% means to reserve a seat specifier determines which seat like for int is d
    sum=n1+n2+n3;
    printf("The sum is: %d",sum);
    return 0;
}

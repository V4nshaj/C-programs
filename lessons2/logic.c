#include<stdio.h>
int main()
{
    int n1,n2,n3,sum;
    printf("Enter three number ");
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1==n2 && n2==n3)//and operator bot shld be true
    printf("all equal");
    else if(n1!=n2 || n2!=n3)//or operator one of the condn shld be true; !
        printf("all are not equal");
    return 0;
}

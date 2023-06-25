#include <stdio.h>
int sum(int n);
int sum(int n)
{
    if(n!=1)
    return n+sum(n-1);
    else return n;
}
int main()
{
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result=sum(num);
    printf("\nSum = %d", result);
    return 0;
}

/*relation operator*/
#include<stdio.h>
int main()
{
    int n1,n2,n3,sum;
    printf("Enter three number ");
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1>n2)
    printf("n1 greater than n2");
    else if(n1<n2)
    printf("n1 less than n2");
     else if(n1<=n2)
    printf("n1 less than or equal to n2");
    else if(n1>=n2)
    printf("n1 greater than or equal to n2");
    else if(n1==n2)
    printf("n1 is equal to n2");
    else if(n1!=n2)
    printf("n1 is not equal to n2");
    return 0;
}

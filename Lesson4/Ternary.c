//Ternary is single statement which is used as a replacement for if else
#include <stdio.h>
int main()
{
    int a,b,max;
    printf("Enter 1st no.: ");
    scanf("%d", &a);
    printf("Enter 2nd no.: ");
    scanf("%d", &b);
    max=(a>b)?a:b;
            printf("%d", max);
    return 0;
}

//check triangle
#include <stdio.h>
int main()
{
    int a,b,c,s;
    printf("Enter 1st angle");
    scanf("%d", &a);
    printf("Enter 2nd angle");
    scanf("%d", &b);
    printf("Enter 3rd angle");
    scanf("%d", &c);
    s=a+b+c;
    if(s==180 && a>0 && b>0 && c>0)
        printf("Triangle");
    else
        printf("Not triangle");
    return 0;
}

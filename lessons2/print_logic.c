#include<stdio.h>
int main()
{
    printf("%d", 1 && 1);//1 o/p
    printf("%d", 1 && 0);//0 o/p
    printf("%d", 1 && 0);//1 o/p
    printf("%d", 0 || 1);//1 o/p
    printf("%d", 0 || 0);//1 o/p
    printf("%d", !12341);//0 o/p invert non zero to zero and zero to 1
    printf("%d", !0);//1 o/p
    return 0;
}

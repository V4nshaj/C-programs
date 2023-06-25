#include<stdio.h>
int main()
{
    int n1,n2,n3,sum,sub,div,inc,dec,mul;
    printf("Enter three number ");
    scanf("%d %d %d", &n1, &n2, &n3);
    sum=n1+n2+n3; /*assignment is from right to left i.e n1+n2=sum this is wrong
    num1 and num2 are operand; = is assignment operator; +,-,*,/ are operators;*/
    printf("The sum is: %d",sum);
    sub=n1-n2;
    mul=n1*n2*n3;
    div=n1/n2;
    inc=n1++;
    dec=n1--;
    return 0;
}
/*Arithematic operator is also known as  binary operator as they hav 2 or more operands
Unary operator are operator which hav only 1 operand.
The unary operator are of two types increment(n++, ++n) and decrement(n--,--n)*/

/*Variable are specific memory loc type of mem determines d mem to be allocated
types:
int->2 bytes; eg-2,46,5
float->4 bytes; eg-2.5,4.35
double->8 bytes; eg-214.14598
char->1 byte; eg b, V, l*/
/*Format Specifier:
Tells compiler what value will be put here
Syntax: %*specifier*
for int, speecifier->d as %d
for float, speecifier->f as %f
for char, speecifier->c as %c*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number ");
    scanf("%d", &num);//scanf is used to take user i/p scanf is predefined in stdio.h header file
    printf("The number is: %d",num);
    return 0;
}


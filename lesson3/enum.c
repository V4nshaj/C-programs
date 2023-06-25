/*enum is a integral constant not float or double variable. It can have same variable name
if no value is assigned then compiler assigns 0 to the first enum variable and other enum variable
with get 1 incremented value. Eg enum n1=3 then enum n2=4 n3=5 by compiler*/
//enum {n1=3,n2=32,n3=55};//legal
//enum{n1=12.2}//illegal


/*#include <stdio.h>
int main()
{

    enum numbers{n1,n2,n3=15,n4};//by default n1=0,n2=1,n3=15,n4=16
    printf("%d %d %d %d",n1,n2,n3,n4);
}*/

#include <stdio.h>  
#include <string.h>  
int main()  
{  
    int l,k=0;
    char str[40],s[40]; // declare the size of character string  
    gets(str);  
    l=strlen(str);
    // use strrev() function to reverse a string  
    for(int i=l-1;i>=0;i--)
    { s[k]=str[i];
    k++;}
    strrev(s);
    printf ("%s", s);  
    return 0;  
}

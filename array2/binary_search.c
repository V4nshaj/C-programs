#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[100];
    int m,l=0,h,i=0,n,a;
    printf("Enter the no. of elements\n");
    scanf("%d", &n);
    h=n;
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
        printf("Enter the no.\n");
        scanf("%d", &a);
        while(l<=h)
         {
             m=(l+h)/2;

             if(a<arr[m])
                h=m-1;
                else if(a>arr[m])
                l=m+1;
            else if(a==arr[m])
                {
                    printf("Found pos %d", m+1);
                    break;
                }
                else
                    printf("Not found");
         }
    return 0;
}


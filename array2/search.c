#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[100];
    int i=0,n,a,k=0;
    printf("Enter the no. of elements\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
        printf("Enter the no.\n");
        scanf("%d", &a);
        for(i=0;i<n;i++)
         {
            if(arr[i]==a)
                k=i;
         }
         if(k==0)
                 printf("Not found");
            else
                printf("Found pos %d", k+1);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[100];
    int i=0,n,j,temp;
    printf("Enter the no. of elements\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    printf("Prev array:\n");
    for(i=0;i<n;i++)
        printf("%d\n", arr[i]);
        for(j=0;j<n-1;j++)
        {
            for(i=j+1;i<n;i++)
            {

                if(arr[j]>arr[i])
                {
                    temp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
                }
            }
        }
        printf("Sorted array:\n");
        for(i=0;i<n;i++)
        printf("%d\n", arr[i]);
    return 0;
}


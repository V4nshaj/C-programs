#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    printf("Enter no. of rows = ");
    scanf("%d", &n);
    printf("Enter no. of columns = ");
    scanf("%d", &m);
    int arr[n][m];
    printf("Enter the elements:\n");
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
        {
            printf("arr[%d][%d] = ", i,j);
          scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    printf("\nPrinting: \n");
      for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
        {
          printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}


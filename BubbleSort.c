#include <stdio.h>

void Bubblesort(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
   int n,i;
   printf("Enter size: ");
   scanf("%d",&n);
   int arr[n];
   printf("Enter array: ");
   for(i=0;i<n;i++)
   {
   scanf("%d",&arr[i]);
   }
   Bubblesort(arr,n);
   printf("sorted array\n");
   for(i=0;i<n;i++)
   {
   printf("%d ",arr[i]);
   }
    return 0;
}

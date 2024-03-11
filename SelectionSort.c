#include <stdio.h>
void Selectionsort(int arr[],int n)
{
    int i,j,temp,min;
    for(i=0;i<n;i++)
    {
        min = arr[i];
        for(j=i+1;j<n;j++)
        {
            if(min>arr[j])
            {
                temp = min;
                min = arr[j];
                arr[j] = temp;
            }
        }
        arr[i] = min;
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
   Selectionsort(arr,n);
   printf("sorted array\n");
   for(i=0;i<n;i++)
   {
   printf("%d ",arr[i]);
   }
    return 0;
}

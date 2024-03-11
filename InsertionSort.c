#include <stdio.h>
void Insertionsort(int a[],int n)
{
    int i,j,temp,k;
    for(i=0;i<n-1;i++)
    {
        for(j=i;j>=0;j--)
        {
            if (a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
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
   Insertionsort(arr,n);
   printf("sorted array\n");
   for(i=0;i<n;i++)
   {
   printf("%d ",arr[i]);
   }
    return 0;
}

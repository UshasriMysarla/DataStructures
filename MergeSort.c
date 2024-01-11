#include <stdio.h>
#include <conio.h>
void merge(int [],int,int,int);
void mergesort(int a[],int low,int high)
{
int mid;
if(low < high)
{
mid = (low + high)/2;
mergesort(a,low,mid);
mergesort(a,mid+1,high);
merge(a,low,high,mid);
}
}
void merge(int a[],int l,int h,int m) {
int c[100],i,j,k;
i = l; j = m + 1; k = l;
while(i <= m && j <= h) {
if(a[i] < a[j]) {
c[k] = a[i];
i++; k++;
}
else {
c[k] =a[j];
j++; k++;
}
}
while(i <= m)
c[k++] = a[i++];
while(j <= h)
c[k++] = a[j++];
for(i = l; i < k; i++)
a[i] = c[i];

}
void main()
{
int i,n,a[100];

printf("Enter the size of the array :");
scanf("%d",&n);
printf("Enter the elements :\n");
for(i = 0; i < n; i++)
scanf("%d",&a[i]);
mergesort(a,0,n-1);
printf("Elements in sorted order :\n");
for(i = 0; i < n; i++)
printf("%5d",a[i]);
}




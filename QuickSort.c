#include <stdio.h>
void quicksort(int arr[] ,int first, int last);
 int main(){
  int size,i;
  printf("Enter size of the array:");
  scanf("%d",&size);
  int arr[size];
  printf("Enter array elements:\n");
  for(i=0;i<size;i++){
  scanf("%d",&arr[i]);
}
quicksort(arr,0,size-1);
printf("Sorted array elements:\n");
for(i=0;i<size;i++){
printf("%d ",arr[i]);
}
return 0;
}
void quicksort(int arr[], int first, int last){
int pivot,j,temp,i;
if(first<last){
pivot = first;
i =first;
j = last;
while(i<j){
while(arr[i]<=arr[pivot] && i<last){
i++;
}
while(arr[j]>arr[pivot]){
j--;
}
if(i<j){
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
temp = arr[pivot];
arr[pivot] = arr[j];
arr[j] = temp;
quicksort(arr,first,j-1);
quicksort(arr,j+1,last);

}

}



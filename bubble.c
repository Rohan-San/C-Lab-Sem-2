#include<stdio.h>
int main(){
  int n;
  printf("Enter the size of array to be sorted\n");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the array to be sorted\n");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  int temp;
  for(int i=0;i<n-1;i++){
    for(int j=1;j<n-i;j++){
      if(arr[j]>arr[j-1]){
        temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
      }
    }
  }
  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
}
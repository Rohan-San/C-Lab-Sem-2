#include <stdio.h>

int main(void) {
  int n,low,mid,high,key,flag=0;
  printf("Enter the size of array \n");
  scanf("%d",&n);
  int arr[n];
  printf("enter the elements of array in ascending order\n");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  low=0;
  high=n-1;
  printf("enter the key element to be searched \n");
  scanf("%d",&key);
  while(high-low>=0){
    mid=(high+low)/2;
    if(arr[mid]==key){
      flag++;
      printf("element found \n");
      break;
    }else if(arr[mid]<key){
      low=mid+1;
    }else if(arr[mid]>key){
      high=mid-1;
    }
  }
  if(flag==0){
    printf("Search unsucessfull\n");
  }else{
    printf("Search sucessfull\n");
  }
  return 0;
}
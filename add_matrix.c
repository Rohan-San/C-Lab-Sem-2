#include <stdio.h>

int main(void) {
  int m1,n1,m2,n2;
  printf("Enter the order of the matrix 1 \n");
  scanf("%d %d",&m1,&n1);
  printf("Enter the order of the matrix 2 \n");
  scanf("%d %d",&m2,&n2);
  int mat1[m1][n1],mat2[m2][n2];
  if(m1!=m2 || n1!=n2){
    printf("Enter a valid order \n");
  }else{
    printf("Enter the elemnts of first matrix \n");
    for(int i=0;i<m1;i++){
      printf("row %d :",i);
      for(int j=0;j<n1;j++){
        scanf("%d",&mat1[i][j]);
      }
    }
    printf("Enter the elements of second matrix \n");
    for(int i=0;i<m2;i++){
      printf("row %d :",i);
      for(int j=0;j<n2;j++){
        scanf("%d",&mat2[i][j]);
      }
    }
  }
  printf("\n");
  int sum[n1][m1];
  for(int i=0;i<m2;i++){
      for(int j=0;j<n2;j++){
        sum[i][j]=mat1[i][j]+mat2[i][j];
      }
    }
  printf("the sum matrix :\n");
for(int i=0;i<m2;i++){
   printf("row %d :",i);
      for(int j=0;j<n2;j++){
        printf("%d ",sum[i][j]);
      }
  printf("\n");
    }
  
  return 0;
}
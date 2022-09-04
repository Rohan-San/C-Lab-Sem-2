#include <stdio.h>

int main(void) {
  int m,n;
  printf("Enter the order of matrix \n");
  scanf("%d %d",&m,&n);
  int mat[m][n];
  int tra[n][m];
  for(int i=0;i<m;i++){
    printf("row %d : ",i);
    for(int j=0;j<n;j++){
      scanf("%d",&mat[i][j]);
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      tra[i][j]=mat[j][i];
    }
  }
  printf("\n");
  for(int i=0;i<n;i++){
    printf("row %d : ",i);
    for(int j=0;j<m;j++){
      printf("%d ",tra[i][j]);
    }
    printf("\n");
  }
  return 0;
}
/*Write and execute a C program to add two matrices. Display the result in matrix form.*/

#include <stdio.h>
void main()
{
    int m1,n1,m2,n2;
    printf("Enter the order (m*n) of matrix 1: \n");
    scanf("%d %d",&m1,&n1);
    printf("Enter the order (m*n) of matrix 2: \n");
    scanf("%d %d",&m2,&n2);
    int mat1[m1][n1],mat2[m2][n2];
    if(m1!=m2 || n1!=n2){
    printf("Enter a valid order.\n");
    }
    else{
    printf("Enter elemnts of first matrix:\n");
    for(int i=0;i<m1;i++)
    {
        printf("Row %d :",i);
        for(int j=0;j<n1;j++)
        {
        scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the elements of second matrix \n");
    for(int i=0;i<m2;i++)
    {
        printf("Row %d :",i);
        for(int j=0;j<n2;j++)
        {
        scanf("%d",&mat2[i][j]);
        }
    }
    }
    int sum[n1][m1];
    for(int i=0;i<m2;i++)
    {
        for(int j=0;j<n2;j++)
        {
        sum[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    printf("The sum matrix:\n");
    for(int i=0;i<m2;i++)
    {
        printf("Row %d :",i);
        for(int j=0;j<n2;j++)
        {
        printf("%d ",sum[i][j]);
        }
    printf("\n");
    }
}

/* Output_
Enter the order (m*n) of matrix 1: 
3 3
Enter the order (m*n) of matrix 2: 
3 3
Enter elemnts of first matrix:
Row 0 :1 2 3
Row 1 :1 2 3
Row 2 :1 2 3
Enter the elements of second matrix 
Row 0 :4 5 6
Row 1 :5 6 7 
Row 2 :6 7 8
The sum matrix:
Row 0 :5 7 9
Row 1 :6 8 10
Row 2 :7 9 11
*/

/* Write and execute a C program to read a matrix and find its transpose.
Display the result in matrix form.*/

#include <stdio.h>
void main()
{
    int m,n;
    printf("Enter order of the matrix: ");
    scanf("%d %d",&m,&n);
    int mat[m][n];
    int tra[n][m];
    for(int i=0;i<m;i++)
    {
        printf("Row %d: ",i);
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            tra[i][j]=mat[j][i];
        }
    }
    printf("The transposed matrix is:\n");
    for(int i=0;i<n;i++)
    {
        printf("Row %d : ",i);
        for(int j=0;j<m;j++)
        {
            printf("%d ",tra[i][j]);
        }
        printf("\n");
    }
}

/* Output_
Enter order of the matrix: 3 3
Row 0: 1 2 3
Row 1: 4 5 6
Row 2: 7 8 9
The transposed matrix is:
Row 0 : 1 4 7
Row 1 : 2 5 8
Row 2 : 3 6 9
*/

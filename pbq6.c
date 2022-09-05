/*Write and execute a C program to read a number using keyboard and print Fibonacci series
till that number using one dimensional arrays.*/

#include <stdio.h>
void main()
{
    int n;
    printf("Enter no. of elements for Fibonacci series: ");
    scanf("%d",&n);
    int arr[n];
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<n;i++)
    {
    arr[i]=arr[i-1]+arr[i-2];
    }
    printf("The series is: ");
    for(int i=0;i<n;i++)
    {
    printf("%d ",arr[i]);
    }
}

/* Output_
Enter no. of elements for Fibonacci series: 10
The series is: 0 1 1 2 3 5 8 13 21 34 
*/

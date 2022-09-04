/*Write and execute a C program to find the sum of odd numbers and even numbers in first
n natural numbers using a for loop and display the result.*/

#include <stdio.h>
void main()
{
    int i, n, odd_sum=0, even_sum=0;
    printf("Enter the value of num: \n");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    {
    if (i%2==0)
    {
    even_sum+=i;
    }
    else
    {
    odd_sum+=i;
    }
    }
    printf("Sum of all odd numbers = %d\n", odd_sum);
    printf("Sum of all even numbers = %d\n", even_sum);
}

/* Output_
Enter the value of num:
8
Sum of all odd numbers = 16
Sum of all even numbers = 20
*/
/*Write and execute a C program to find factorial of a given number using
functions with arguments, with return type. Display the results.*/

#include <stdio.h>
int factorial (int n);
void main()
{
    int n,fact=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    fact=factorial(n);
    printf("Factorial of %d is: %d",n,fact);
}
int factorial(int n)
{
    int fact;
    if(n==1)
    {
    return 1;
    }
    else
    {
    fact=n*factorial(n-1);
    }
    return fact;
}

/* Output_
Enter a number: 6
Factorial of 6 is: 720
~~~~~~~~~~~~~~~~~~~~~~~~
Enter a number: 5
Factorial of 5 is: 120
*/
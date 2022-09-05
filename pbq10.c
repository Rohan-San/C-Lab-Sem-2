/*Write and execute a C program to read a number and find whether it is prime or not
using functions without arguments, without return type. Display the results.*/

#include <stdio.h>
int prime();
void main()
{
    prime();
}
int prime()
{
    int a,i,flag;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(i=2;i<=a/2;i++)
    {
    flag=0;
    if(a%i==0)
    {
    flag=1;
    break;
    }
    }
    if(a==1){
    printf("It is neither prime not composite.");
    }
    else{
    if(flag==0)
    printf("It is a prime number.");
    else
    printf("It is not a prime number.");
    }
}

/* Output_
Enter a number: 4
It is not a prime number.
~~~~~~~~~~~~~~~~~~~~~~~~~~
Enter a number: 23
It is a prime number.
*/
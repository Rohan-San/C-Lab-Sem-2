/*Write and execute a C program to find whether a given number is palindrome or not
using a while loop and display the result.*/

#include <stdio.h>
void main()
{
    int n,rem,revN=0,orgN=0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    orgN = n;
    while(n!=0)
    {
    rem=n%10;
    revN=revN*10+rem;
    n/=10;
    }
    if (orgN==revN)
    printf("%d is a palindrome.\n", orgN);
    else
    printf("%d is not a palindrome.\n", orgN);
}

/*Output_
Enter an integer: 74347
74347 is a palindrome.
Enter an integer: 69420
69420 is not a palindrome.
*/
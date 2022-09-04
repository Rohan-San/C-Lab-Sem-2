/*Write and execute a C program to find the biggest of three numbers using nested ternary
operator and display the result.*/

#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    (a>b)?((a>c)?printf("%d is biggest\n",a):printf("%d is biggest\n",c)):((b>c)?printf("%d is biggest\n",b):printf("%d is biggest\n",c));
}

/* Output_
Enter three numbers:
45
36
74
74 is biggest
*/
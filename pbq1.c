/*Write and execute a C program to find the roots of a quadratic equation using if-else
statement and display the result.*/

#include <stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d,r1,r2;
    printf("Enter co-efficients a,b,c of quadratic equation: \n");
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d==0)
    {
    r1=-b/2*a;
    printf("Roots are real and equal.\n");
    printf("Roots = %.2f, %.2f",r1,r1);
    }
    else if(d>0)
    {
    r1=(-b+sqrt(d))/2*a;
    r2=(-b-sqrt(d))/2*a;
    printf("Roots are real and unequal.\n");
    printf("Root 1 = %.2f, Root 2 = %.2f\n",r1,r2);
    }
    else if(d<0)
    {
    r1=-b/2*a;
    r2=sqrt(-d)/2*a;
    printf("Roots are imaginary and unequal.\n");
    printf("Root 1 = %.2f + i%.2f,  Root 2 = %.2f - i%.2f\n",r1,r2,r1,r2);
    }
}

/* Output_
Enter co-efficients a,b,c of quadratic equation: 
1
4
6
Roots are imaginary and unequal.
Root 1 = -2.00 + i1.41,  Root 2 = -2.00 - i1.41
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Enter co-efficients a,b,c of quadratic equation:
1
8
3
Roots are real and unequal.
Root 1 = -0.39, Root 2 = -7.61
*/

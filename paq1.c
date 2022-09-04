/*Write and execute a C program to read two points with x and y coordinates, compute the
straight-line distance between them and display the result.*/

#include <stdio.h>
#include <math.h>
void main()
{
    float x1,y1,x2,y2,d=0,s1=0,s2=0;
    printf("Enter coordinates (x1,y1): \n");
    scanf("%f%f",&x1,&y1);
    printf("Enter coordinates (x2,y2): \n");
    scanf("%f%f",&x2,&y2);
    s1=x1-x2;
    s2=y1-y2;
    d=sqrt(s1*s1+s2*s2);
    printf("Distance = %f units.\n",d);
}

/* Output_
Enter coordinates (x1,y1): 
4
5
Enter coordinates (x2,y2): 
7
3
Distance = 3.605551 units.
*/
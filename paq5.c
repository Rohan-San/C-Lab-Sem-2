/*Write and execute a C program to read a list of positive values and calculate its average
using break and continue statement and display the result.*/

#include <stdio.h>
void main()
{
    int i,count=0;
    float x,sum=0,avg;
    printf("Enter values one after another\n");
    printf("Enter a negative number to end\n");
    for(i=1;i<=1000;i++)
    {
        scanf("%f",&x);
        if(x==0)
        continue;
        if(x<0)
        break;
        sum=sum+x;
        count++;
    }
    avg=sum/count;
    printf("Sum is: %f\nAverage is: %f\n",sum,avg);
}

/* Output_
Enter values one after another
Enter a negative number to end
1
2
3
4
5
-6
Sum is: 15.000000
Average is: 3.000000
*/
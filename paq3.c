/*Write and execute a C program to check whether a given year is leap year or not using ifelse
statement and display the result.*/

#include <stdio.h>
void main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if ((year%400==0)||((year%100!=0)&&(year%4==0)))
    {
    printf("%d is a leap year.\n", year);
    }
    else
    {
    printf("%d is not a leap year.\n", year);
    }
}

/* Output_
Enter a year: 2016
2016 is a leap year.
Enter a year: 4
4 is a leap year.
Enter a year: 47
47 is not a leap year.
Enter a year: 200
200 is not a leap year.
*/
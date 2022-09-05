/*Write and execute a C program to read a number (integer) in the range 1 to 5 using the
keyboard and print its equivalent Roman representation using a switch statement.*/

#include <stdio.h>
void main()
{
    int i;
    printf("Enter number to get roman equivalent: ");
    scanf("%d",&i);
    switch(i)
    {
        case 1:
            printf("I");
            break;
        case 2:
            printf("II");
            break;
        case 3:
            printf("III");
            break;
        case 4:
            printf("IV");
            break;
        case 5:
            printf("V");
            break;
        default:
            printf("Enter a valid number.\n");
    }
}

/* Output_
Enter number to get roman equivalent: 2
II
Enter number to get roman equivalent: 5
V
*/

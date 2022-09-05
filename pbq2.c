/*Write and execute a C program to perform desired arithmetic operation using switch
statement declaring choice as char data type and display the result.*/

#include <stdio.h>
void main()
{
    int a, b, res;
    char ch=' ';
    printf("Enter the operation to carry out: ");
    scanf("%c",&ch);
    printf("Enter the numbers on which operation needs to be done:\n");
    scanf("%d %d", &a, &b);  
    switch(ch)
    {
        case '+':{
            res=a+b;
            break;
        }
        case '-':{
            res=a-b;
            break;
        }
        case '/':{
            res=a/b;
            break;
        }
        case '%':{
            res=a%b;
            break;
        }
        default:
        printf("Enter a valid character.\n");
    }
    printf("%d %c %d = %d",a,ch,b,res);
}

/* Output_
Enter the operation to carry out: +
Enter the numbers on which operation needs to be done:
4
7
4 + 7 = 11
*/

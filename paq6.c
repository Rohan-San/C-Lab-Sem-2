/*Write and execute a C program to determine whether a character entered by the user is an
alphabet, digit, punctuation or whitespace using simple if statements and display the
result.*/

#include <stdio.h>
#include <ctype.h>
void main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    if(isalpha(ch))
    printf("%c is a character.\n",ch);
    if(isdigit(ch))
    printf("%c is a digit.\n",ch);
    if(ispunct(ch))
    printf("%c is punctuation.\n",ch);
    if(isspace(ch))
    printf("Character is a blank space.\n",ch);
}

/* Output_
Enter the character: af
a is a character.
Enter the character: 420
4 is a digit.
Enter the character: ~
~ is punctuation.
Enter the character:  
Character is a blank space.
*/
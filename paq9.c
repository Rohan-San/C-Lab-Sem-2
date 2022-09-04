/*Write and execute a C program to read two strings using keyboard, and combine them
without using built-in functions and display the result.*/

#include<stdio.h>
#include<string.h>
void main()
{
    char str1[30],str2[30],str[30];
    int i,j,len1,len2;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    len1=strlen(str1);
    len2=strlen(str2);
    for(i=0;str[i]!='\0';i++)
    str[i]=str1[i];
    //puts(str);
    for(j=0,i=len1;str2[j]!='\0';j++,i++)
    str[i]=str2[j];
    str[i]='\0';
    printf("Concatenated string is: ");
    puts(str);
}

/* Output_
Enter first string: What's
Enter second string: App?
Concatenated string is: What'sApp?
*/
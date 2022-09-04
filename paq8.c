/*Write and execute a C program to read an array of ‘n’ elements and a key element, search
the key element in the given array using linear search and display whether the search is
successful or unsuccessful.*/

#include<stdio.h>
void main()
{
    int a[10],i,n,key,flag=0;
    printf("Enter the no. of elements in an array: ");
    scanf("%d",&n);
    printf("Enter elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
        flag=1;
        break;
        }
    }
    if(flag==1)
    printf("Element found in position %d",i+1);
    else
    printf("Element not found");
}

/* Output_
Enter the no. of elements in an array: 5
Enter elements of the array:
2
4
6
3
4
Enter the element to be searched: 3
Element found in position 4
*/
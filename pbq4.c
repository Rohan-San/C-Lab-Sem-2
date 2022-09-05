/*Write and execute a C program to read an array of ‘n’ elements and a key element,
search the key element in the given array using binary search and display whether
the search is successful or unsuccessful. Display the position of the key element if found.*/

#include <stdio.h>
void main()
{
    int n,low,mid,high,key,flag=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements in ascending order:\n");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    low=0;
    high=n-1;
    printf("Enter element to be searched: ");
    scanf("%d",&key);
    while(high-low>=0)
    {
        mid=(high+low)/2;
        if(arr[mid]==key)
        {
            flag++;
            break;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else if(arr[mid]>key)
        {
            high=mid-1;
        }
    }
    if(flag==1)
    {
    printf("Element found at index %d.\n",mid+1);
    }
    else
    {
    printf("Search unsucessful.\n");
    }
}

/* Output_
Enter the size of array: 5
Enter array elements in ascending order:
12
23
45
56
78
Enter element to be searched: 34
Search unsucessful.
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Enter the size of array: 5
Enter array elements in ascending order:
12
23
34
45
56
Enter element to be searched: 23
Element found at index 2.
*/

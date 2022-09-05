/*Write and execute a C program to read an array of elements and sort the elements
in descending order using bubble sort. Display the sorted elements.*/

#include <stdio.h>
void main()
{
    int n;
    printf("Enter the size of array to be sorted: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array to be sorted:\n");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=1;j<n-i;j++)
        {
            if(arr[j]>arr[j-1])
            {
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
    printf("The sorted array is: ");
    for(int i=0;i<n;i++)
    {
    printf("%d ",arr[i]);
    }
}

/* Outout_
Enter the size of array to be sorted: 5
Enter the array to be sorted:
23
12
32
423
123
The sorted array is: 423 123 32 23 12 
*/

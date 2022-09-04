/*Write and execute a C program to swap two numbers using pointers. Display the result.*/

#include <stdio.h>
void swap(int*, int*);
void main()
{
    int x, y;
    printf("Enter the value of x and y:\n");
    scanf("%d%d",&x,&y);
    printf("Before Swapping:\nx,y = %d,%d\n", x, y);
    swap(&x, &y);
    printf("After Swapping:\nx,y = %d,%d\n", x, y);
}
void swap(int *a, int *b)
{
    int t;
    t = *b;
    *b = *a;
    *a = t;
}

/* Output_
Enter the value of x and y:
2
8
Before Swapping:
x,y = 2,8
After Swapping:
x,y = 8,2
*/
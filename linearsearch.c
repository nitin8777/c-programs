#include <stdio.h>
int main()
{
    int a[100], n, x, i;
    printf("enter the size of array");
    scanf("%d", &n);

    printf("enter the element of array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter the element to search");
    scanf("%d", &x);

    for (i = 0; i < n; i++)
        if (a[i] == x)
        {
            break;
        }

    if (i < n)
        printf("element found at index %d", i);
    else
        printf("not found");
}
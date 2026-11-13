#include <stdio.h>

int main()
{
    int a[100], n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("\nArray elements are:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nSum of array elements = %d", sum);

    return 0;
}

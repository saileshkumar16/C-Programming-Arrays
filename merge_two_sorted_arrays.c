#include <stdio.h>

int main()
{
    int arr1[] = {7, 12, 15, 17};
    int arr2[] = {5, 8, 9, 10, 11};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    int temp;

    printf("Before swapping:\n");
    printf("arr1: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr1[i]);
    printf("\narr2: ");
    for (int i = 0; i < m; i++)
        printf("%d ", arr2[i]);
        
    printf("\n");

    int *p1 = arr1;
    int *p2 = arr2;

    // First loop → compare and swap
    for (int i = 0; i < n; i++)
    {
        if (*(p1 + i) > *p2)
        {
            // Swap using pointers
            temp = *(p1 + i);
            *(p1 + i) = *p2;
            *p2 = temp;
        }

        // Sort arr2 in the same loop itself (light optimization)
        for (int k = 0; k < m - 1; k++)
        {
            if (arr2[k] > arr2[k + 1])
            {
                temp = arr2[k];
                arr2[k] = arr2[k + 1];
                arr2[k + 1] = temp;
            }
        }
    }

    printf("After swapping:\n");
    printf("arr1: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr1[i]);
        
    printf("\narr2: ");
    for (int i = 0; i < m; i++)
        printf("%d ", arr2[i]);
    printf("\n");

    return 0;
}

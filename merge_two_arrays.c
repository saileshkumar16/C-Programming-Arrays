#include <stdio.h>

int main()
{
    int arr1[10] = {1, 2, 3}; // enough space to hold arr2
    int arr2[] = {4, 5, 6};

    int n1 = 3; // current size of arr1 data
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // Append arr2 into arr1
    for (int i = 0; i < n2; i++)
    {
        arr1[n1 + i] = arr2[i];
    }

    // Print merged arr1
    printf("Merged array:\n");
    for (int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", arr1[i]);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int arr[100] = {10, 20,20, 20,30};
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; )
        {
            if (arr[i] == arr[j])
            {
                // Shift elements left to delete duplicate
                for (int k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;  // Decrease size after deletion
                     // Don't increment j, because new element at j needs to be checked(because new element can also be a duplicate)
            }
            else
            {
                j++;  // Only increment if no deletion means unique elemts
            }
        }
    }

    // Print final array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

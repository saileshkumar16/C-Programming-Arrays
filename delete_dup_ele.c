#include <stdio.h>

int main()
{
    int arr[] = {3, 6, 3, 12, 1, 5, 3, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Iterate through the array
    for(int i = 0; i < n; i++)
    {
        // Check for duplicate from the next ele onwards
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                // Shift element
                for(int k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;    // Reduce size
                j--;    // decrement the index and check if current index is again duplicate or not
            }
        }
    }

    
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

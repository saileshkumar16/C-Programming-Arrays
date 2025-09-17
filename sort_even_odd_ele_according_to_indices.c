#include <stdio.h>

int main() 
{
    int arr[] = {3, 6, 12, 1, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

  
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] > arr[j]) 
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int i = 0, j = 1;
    while (i < n && j < n) 
    {
        
        if (arr[i] % 2 == 0)
            i = i + 2;
       
        else if (arr[j] % 2 == 1)
            j = j+ 2;
    
        else 
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i = i+2;
            j = j+2;
        }
    }

   
    for (int k = 0; k < n; k++)
        printf("%d ", arr[k]);

    return 0;
}

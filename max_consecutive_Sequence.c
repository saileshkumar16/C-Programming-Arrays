#include <stdio.h>

int main() 
{
    int arr[] = {8,5,6,100,101,103,102};
    int n = sizeof(arr) / sizeof(arr[0]);

    //Sort the given array first
    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[j] < arr[i]) 
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    
    int max_len = 1;
    int len = 1;

    for (int i = 1; i < n; i++) 
    {
        if (arr[i] == arr[i - 1] + 1) //current ele is previous ele + 1 this is the condition for checking consecutive elemts
        {
            len++;
            
            if (len > max_len) 
            max_len = len;
            
        }
        else 
            len = 1; //reset if consecutive streak breaks
        
    }

    printf("Longest consecutive subsequence length = %d", max_len);

    return 0;
}

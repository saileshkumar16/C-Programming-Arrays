#include <stdio.h>

int main() 
{
    int arr[] = {3, 6, 12, 1, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int ele = 3;
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]==ele)
        {
            for(int j=i; j<n-1; j++)
            {
                 arr[j] = arr[j+1]; //shift left
            }
            n--; //decrease size
        }
    }
    
        for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

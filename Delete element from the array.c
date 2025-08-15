#include <stdio.h>

int main() 
{
    int arr[] = {1,20,5,78,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int ele = 5;
    
    int index = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==ele)
        {
            index = i;
            break;
        }
    }
    
    for(int i = index; i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    
    n--;

    
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}

// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int arr[]={10,20,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int ele = 510;
    
    int found = 0;
    int i;
    
    int low = 0;
    int high = n -1 ;
    
    while(low<=high)
    {
        int mid = (low + high) / 2;
        
        if(ele<arr[mid])
        high = mid-1;
        
        else if(ele>arr[mid])
        low = mid+1;
        
        else if(ele==arr[mid])
        {
            found = 1;
            printf("Element found at %d index",mid);
            break;
        }
        
    }
    
    if(!found)
    printf("Element is not found");

    
}
    

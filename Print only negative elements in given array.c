Print only negative elements in given array
#include <stdio.h>

int main() {
    
    int arr[]={0,2,-3,-4,6,6,7};
    int n;
    
    n = sizeof(arr)/sizeof(arr[0]);
    
    
    for(int i=0; i<n;i++)
    {
        if(arr[i]>=0)
        {
        continue;
        }
        
        printf(" %d",arr[i]);
    }
    
    return 0;
}

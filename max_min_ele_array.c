#include <stdio.h>

int main() {
    
    int arr[]={0,2,-3,-4,6,6,7};
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
    
    int max = arr[0];
    
    int min = arr[0];
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        max = arr[i];
        
        else if(arr[i]<min)
        min = arr[i];
    }
    
    printf("%d %d",max,min);
    return 0;
}

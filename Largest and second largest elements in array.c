#include <stdio.h>
#include <limits.h>
int main() {
    
    int arr[]={0,2,-3,-4,6,6,7};
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
    
    int max = INT_MIN;
    int smax = INT_MIN;
    
    printf("%d %d\n",max,smax);
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            smax = max; 
            max = arr[i];
        }
        
        else if(arr[i]>smax && arr[i]!=max)
        {
            smax = arr[i];
        }
    }
    
    printf("%d %d",max,smax);
    return 0; 
}

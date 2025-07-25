#include <stdio.h>
#include <limits.h>
int main() {
    
    int arr[]={0,2,-3,-4,6,6,7};
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
    
    int eve_count = 0;
    int odd_count = 0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        eve_count++;
        
        else
        odd_count++;
    }
    
    printf("even elements count is %d odd elements count is %d",eve_count,odd_count);
    return 0;
}

#include <stdio.h>
#include <limits.h>
int main() {
    
    int arr[]={0,2,-3,-4,6,6,7};
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
    
    int neg_count = 0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        neg_count++;
    }
    
    printf("%d",neg_count);
    return 0;
}

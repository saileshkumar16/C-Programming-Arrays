#include <stdio.h>
#include <limits.h>
int main() {
    
    int arr1[]={0,2,-3,-4,6,6,7};
    
    
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        arr2[i]=arr1[i];
        printf("%d ",arr2[i]);
        
    }

    return 0;
}

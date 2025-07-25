#include <stdio.h>

int main() {
    
    int arr[]={0,2,-3,-4,6,6,7};
    int n;
    int sum =0;
    n = sizeof(arr)/sizeof(arr[0]);
    
    
    for(int i=0; i<n;i++)
    {
    sum = sum + arr[i];
    }
    printf(" %d",sum);
    return 0;
}

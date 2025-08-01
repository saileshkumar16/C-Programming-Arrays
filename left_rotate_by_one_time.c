#include <stdio.h>

int main()
{
    int arr[]={10,20,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int i;
    
    int tmp = arr[0];
    
    for( i=0;i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }
    
    arr[i] = tmp;
  
    
    for(int j=0;j<n;j++)
    {
        printf("%d ",arr[j]);
    }

    return 0;
}

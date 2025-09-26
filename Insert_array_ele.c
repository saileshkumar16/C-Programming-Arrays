// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int arr[]={10,20,30,40};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int ele = 25;
    
    int pos = 2;
    
    
    for(int i=n; i>pos; i--)
    {
        arr[i] = arr[i-1];
    }
    
    arr[pos] = ele;
    n++;
    
    
    for(int j=0; j<n; j++)
    {
        printf("%d ",arr[j]);
    }

    return 0;
}

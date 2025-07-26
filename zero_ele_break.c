#include <stdio.h>

int main()
{
    int arr[]={1,2,3,0,2};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    
    for(int i=0; i<n;i++)
    {
        if(arr[i]==0)
        break;
        
        count++;
    }
        printf("%d",count);
    return 0;
}

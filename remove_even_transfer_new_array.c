#include <stdio.h>

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int newarr[n];
    
    int odd_count = 0;
    
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2!=0)
        {
            newarr[odd_count] = arr[i];
            odd_count++;
        }
    }
    
    for(int j=0; j<odd_count;j++)
    {
        printf("%d ",newarr[j]);
    }
    

    return 0;
}

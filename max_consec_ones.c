// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int arr[]={1, 1, 0, 1, 1, 1};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    int count =0;
    int max_count=0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
        count++;
        
            if(count > max_count)
            max_count = count;
        }
        
        else if(arr[i]==0)
        count = 0;
    }
    
    printf("%d",max_count);
 

    return 0;
}
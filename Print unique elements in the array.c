#include <stdio.h>

int main()
{
    int arr[] = {10, 20,20,30,30,40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
  
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]==-1)
        continue;
        
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]==arr[i])
            arr[j]=-1;
        }
        
        printf(" %d",arr[i]);
    }
    

    return 0;
}

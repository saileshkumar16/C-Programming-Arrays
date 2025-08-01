#include <stdio.h>

int main()
{
    int arr[] = {10, 20,20,30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
  
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]==-1)
        continue;
        
        int count =1;
        
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]==arr[i])
            {
                count++;
                arr[j]=-1;
            }
        }
        
        printf(" %d %d\n",arr[i],count);
    }
}

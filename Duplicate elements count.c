#include <stdio.h>

int main()
{
    int arr[] = {10,20,20,30,30,40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int dup_count =0;
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]==-1)
        continue;
        
        int is_dup = 0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                is_dup = 1;
                arr[j]=-1;
            }
            
        }
        
        if(is_dup)
        dup_count++;
    }
    
     printf("Total number of duplicate elements: %d\n", dup_count);
    

 

    return 0;
}

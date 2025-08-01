// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int arr[]={1,2,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int found;
    int i;
    
    
    for( i=1; i<=n;i++)
    {
         found = 0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==i)
            found = 1;
        }
        
           if(!found)
        printf("%d",i);
    
    }
    
 
  
 
    

    
    

 

    return 0;
}
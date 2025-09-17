// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int arr[]={1,2,3,5,6,-1,-2,-3};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]<0)
        {
            arr[i]=0;
        }
    }
    
      for(int i=0; i<n; i++)
      {
          printf("%d ",arr[i]);
      }
      
      return 0;
}
    
    


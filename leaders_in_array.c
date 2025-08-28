// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int arr[]={4,7,1,0};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int k=0;
    
    for(int i=0; i<n; i++)
    {
        int flag = 1;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]<arr[j])
            {
                flag = 0;
                 break;
            }
            
        }
        
        if(flag==1)
        {
            arr[k] = arr[i];
            k++;
        }
    }
    
    for(int l=0; l<k;l++)
    {
        printf("%d ",arr[l]);
    }

    return 0;
}
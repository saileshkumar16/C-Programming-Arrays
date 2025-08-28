// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int arr[]={4,7,1,0};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int k=0;
    
    for(int i=0; i<n; i++)
    {
        int leader = 1;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]>arr[i]) // if any element on the right is greater then                   simply we can say current element is not leader
            {
                leader = 0;
                 break;
            }
            
        }
        
        if(leader==1)
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

------------------------------------------------------------------------------------------------------------------------------------

    Optimal solution:

    // Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int arr[]={4,7,1,0};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int max = arr[n-1]; //right most element is always the max
    
     printf("%d ", max);
    
    for(int i=n-2;i>=0 ; i--)
    {
        if(arr[i]>max)
        {
            printf("%d ",arr[i]); //print the max
            max = arr[i]; //update the new max
        }
    }
    
    

    return 0;
}


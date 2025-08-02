// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int arr[]={30,20,40,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int k=2;
    
    for(int r=0; r<k; r++) // rotate left by k times
    {
        int tmp = arr[0]; // after every rotation temp needs to be updated
        
        for (int i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        arr[n - 1] = tmp; // put the first element at last
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    
}
    
 
    

        


    

    

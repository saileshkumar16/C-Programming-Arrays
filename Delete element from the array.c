#include <stdio.h>

int main() 
{
    int arr[] = {3, 6, 12, 1, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int ele = 3;
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]==ele)
        {
            for(int j=i; j<n-1; j++)
            {
                 arr[j] = arr[j+1]; //shift left
            }
            n--; //decrease size
        }
    }
    
        for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

----------------------------------------------------------
/Delete element with respect to position/


    // Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int arr[]={10,20,30,35,40};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    
    int pos = 3;
    
    
    for(int i=pos; i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    n--;
    
    
    for(int j=0; j<n; j++)
    {
        printf("%d ",arr[j]);
    }

    return 0;
}


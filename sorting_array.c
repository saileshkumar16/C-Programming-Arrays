#include <stdio.h>

int main()
{
    int arr[]={9,8,10,12,15};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j]= tmp;
            }
        }
    }
    printf("after sorting the new array is :");
    
    for(int i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }

    return 0;
}

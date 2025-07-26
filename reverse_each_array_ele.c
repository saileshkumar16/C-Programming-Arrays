#include <stdio.h>

int main()
{
    int arr[]={15,16,17,18,19};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    

    int rem;
    
    for(int i=0; i<n; i++)
    {
        int tmp = arr[i];
        int rev = 0;
        
        while(tmp!=0)
        {
        rem = tmp % 10;
        rev = (rev * 10) + rem;
        tmp = tmp / 10;
        }
        arr[i] = rev;
    }
    for(int i=0; i<n;i++)
    {
    printf("%d ",arr[i]);
    }

    return 0;
}

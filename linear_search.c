// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int arr[]={10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int ele = 50;
    
    int found = 0;
    int i;
    for( i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
        found = 1;
        break;
        }
    }
    
    if(found)
    printf("%d is found at %d index in the given array",ele,i);
    else
    printf("%d is not found in the given array",ele);
    
}
    

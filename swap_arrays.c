#include <stdio.h>
#include <string.h>


int main()
{
    int arr1[]={10,20,30};
    int arr2[]={70,80,90};
    
    int n= sizeof(arr1)/sizeof(arr1[0]);
    
    
    for(int i=0; i<n; i++)
    {
        int tmp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = tmp;
    }
    
    printf("Array 1 after swapping is \n");
    
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr1[i]);
    }
    
    printf("\n");
    
    printf("Array 2 after swapping is \n");
    
        for(int i=0; i<n; i++)
    {
        printf("%d ",arr2[i]);
    }
    
    return 0;
}

#include <stdio.h>

int sum(int size, int *arr)
{
    int j,sum = 0 ;
    for(j = 0; j < size; j++)
          sum = sum + arr[j]; 
    
    printf("Sum of the array = %d\n",sum);
}

int main()
{
    
    int arr[100], size, i;
    
    printf("Enter array size\n");
    scanf("%d",&size);
    
    printf("Enter array elements\n");
    for(i = 0; i < size; i++)
          scanf("%d",&arr[i]);
          
    sum(size,arr);
    
    return 0;
}


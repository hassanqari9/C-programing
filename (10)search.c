#include <stdio.h>
int main()
{
    // array to store digits
    int a[100];
    int i, n, s, flag =1;
    printf("no. of digits: ");
    scanf("%d", &n);
    printf("Enter the integer array\n");
    for (i = 0; i < n; i++) {
  
        
        scanf("%d", &a[i]);
    }
    printf("Enter the number to be searched\n");
    scanf("%d", &s);
    
    for (i = 0; i < n; i++) 
    {
        if(a[i] == s)
            flag = 1;
        else 
            flag = 0;
    }
    if(flag == 0)
    {
        printf("not found");
    }
    else
    {
        printf("found");
    }
    return 0;
}

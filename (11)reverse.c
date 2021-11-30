#include <stdio.h>
int main()
{
    int a[100];
    int i, n;
    printf("no. of digits: ");
    scanf("%d", &n);
    printf("Enter the integer array\n");
    for (i = 0; i < n; i++) {
  
        
        scanf("%d", &a[i]);
    }
  
    for (i = n-1; i >=0; i--) 
        printf("%d ", a[i]);
      
    return 0;
}

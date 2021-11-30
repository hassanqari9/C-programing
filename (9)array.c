#include <stdio.h>
int main()
{
    // array to store digits
    int a[100];
    int i, n;
    printf("no. of digits: ");
    scanf("%d", &n);
    printf("Enter the integer array\n");
    for (i = 0; i < n; i++) {
  
        
        scanf("%d", &a[i]);
    }
  
    for (i = 0; i < n; i++) 
        printf("%d ", a[i]);
      
    return 0;
}

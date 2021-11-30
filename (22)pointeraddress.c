#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int *p;
    p = &n;
    
    printf("address of %d is %x", n, p);
}

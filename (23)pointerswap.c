#include<stdio.h>

int main()
{
    int m;
    scanf("%d",&m);
    int *p;
    p = &m;
    
    int n;
    scanf("%d",&n);
    int *q;
    q = &n;
    
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
    
    printf("%d %d ", m,n);
}

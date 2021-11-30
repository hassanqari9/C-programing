#include <stdio.h>
int main() {
    int n, i;
    int fact = 1;
    printf("Enter number: ");
    scanf("%d", &n);

    
    if (n < 0)
        printf("Enter positive no. only");
    else {
        for (i = n; i >=1; i--) {
            printf("%d = %d * %d\n", fact,fact,i);
            fact = fact * i;
        }
        printf("Factorial of %d is %d", n, fact);
    }

    return 0;
}

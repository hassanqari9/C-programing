#include <stdio.h>
int main() {

  int i, n;

  
  int a = 1, b = 1;

  
  int c = a + b;

  printf("Enter the no. of terms: ");
  scanf("%d", &n);

  printf(" %d, %d, ", a, b);

  // print 3rd to nth terms
  for (i = 3; i <= n; i++) {
    printf("%d, ", c);
    a = b;
    b = c;
    c = a + b;
  }

  return 0;
}

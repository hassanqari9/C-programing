#include <stdio.h>  
   
int main() {  
    int counter; 
    printf("Even numbers between 1 to 100\n");  
    
    counter = 2;
    while (counter <= 50) {  
        printf("%d ", counter);
       
        counter = counter + 2;  
    }  
   
    return 0;  
} 

#include <stdio.h>  
   
int main() {  
    int counter; 
    printf("numbers between 1 to 50\n");  
    
    counter = 1;
    while (counter <= 50) {  
        printf("%d", counter);
        
        counter = counter + 1;  
    }  
   
    return 0;  
} 

#include <stdio.h>                 


int main()
{   
    
    // char variables are 1 bytes **in general**. 
    
    char y;                             // Declare variable y.
    
    y = 'A';                            // Assign value to variable y.
    
    printf("%c", y);                    // Print the value of the char variable y.
    
    // What if we try to print the variable y as an integer ?
    
    printf("%d", y);                    // Print the ASCII value of the char y. 
    
    return 0;                      
}


    
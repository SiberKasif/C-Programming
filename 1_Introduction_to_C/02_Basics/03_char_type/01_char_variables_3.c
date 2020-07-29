#include <stdio.h>                 


int main()
{   
	
    char x;                               
    
    x = 'A';                              
    
    x = x * 2;							  // Overflow!!!!

    printf("%c", x);
    printf("\n%d", x);					  // Lets print a char just like an integer

    return 0;                      
}
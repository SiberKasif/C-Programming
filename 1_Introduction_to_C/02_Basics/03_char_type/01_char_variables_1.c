#include <stdio.h>                 

/*
 * C uses char type to store characters and letters. 
 * However, the char type is integer type 
 * because underneath C stores integer numbers instead of characters.
 */

int main()
{   
	
    char x;                               // Variable 'Declaration'.
    
    x = 'A';                              // 'Assignment' of variable x.
    
    printf("%c", x);

    return 0;                      
}
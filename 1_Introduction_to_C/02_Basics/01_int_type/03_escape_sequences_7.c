/**
 * 
 * This code aims to show the basics of escape sequences.
 *
 * Here we print two tabs using escape sequences
 * in between three formatted integers.
 * 
 * Here we do not include any space in between
 * escape sequences and the integer format specifiers.
 * 
 * @author Mustafa Katipoglu
 * @version 1.0
 * @date 2020/07/29
 */

#include <stdio.h>                 


int main()
{   
	
	// Declare and initialize variable x.
    int x = 5;                          
    
    // Lets print the variable three times with only a tab in between.
    printf("%d\t%d\t%d", x, x, x);
    
    return 0;                      
}
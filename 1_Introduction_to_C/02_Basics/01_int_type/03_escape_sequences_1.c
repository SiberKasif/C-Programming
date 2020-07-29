/**
 * 
 * This code aims to show the basics of escape sequences.
 *
 * Here the \t is an escape sequence which prints a tab
 * in between two formatted integer variables.
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
    
    // Lets print the variable twice with a tab in between.
    printf("%d \t %d", x, x, x);								// Notice, there exists 2 spaces as well.
    
    return 0;                      
}
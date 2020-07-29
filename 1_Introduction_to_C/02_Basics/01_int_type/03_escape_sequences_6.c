/**
 * 
 * This code aims to show the basics of escape sequences.
 *
 * Here we print two tabs using escape sequences
 * in between three formatted integers.
 * 
 * Here we also include spaces in between tabs and int
 * format specifiers so that the reader can grasp the idea.
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
    
    // Lets print the variable three times with a tab and a space in between.
    printf("%d \t %d \t %d", x, x, x);
    
    return 0;                      
}
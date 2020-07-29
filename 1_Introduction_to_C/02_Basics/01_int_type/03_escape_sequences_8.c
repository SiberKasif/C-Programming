/**
 * 
 * This code aims to show the basics of escape sequences.
 *
 * Here we print two tabs using escape sequences
 * in between three formatted integers and a new line feed.
 * 
 * Here we include a new line feed at the end 
 * so that we can print another string at the next line.
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
    printf("%d\t%d\t%d\n", x, x, x);
    
    printf("Some other text in the next line.");

    return 0;                      
}
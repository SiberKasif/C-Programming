#include <stdio.h>                 


int main()
{   

	// Do you see the implicit casting here?
	float x = 3.5;						// left side float, right side double

	int size_x 		  = sizeof(x); 
	int size_constant = sizeof(5.5);
	
	// What's going on ?
	printf("Size of the variable %d bytes.", size_x);
	printf("\nSize of the constant %d bytes.", size_constant);

    return 0;                      
}
#include <stdio.h>                 


int main()
{   
	int double_variable_size = sizeof(double); 
	int double_constant_size = sizeof(5.5);
	
	printf("Size of a double variable %d bytes.", double_variable_size);
	printf("\nSize of a double constant %d bytes.", double_constant_size);

    return 0;                      
}
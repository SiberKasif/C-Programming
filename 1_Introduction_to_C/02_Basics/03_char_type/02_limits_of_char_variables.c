#include <stdio.h>                 
#include <limits.h>

int main()
{   

	int size_of_a_char = sizeof(char);
	printf("A char variable is %d byte.", size_of_a_char);
	
	printf("\nMinimum char value = %d", CHAR_MIN);

	printf("\nMaximum char value = %d", CHAR_MAX);

    return 0;                      
}
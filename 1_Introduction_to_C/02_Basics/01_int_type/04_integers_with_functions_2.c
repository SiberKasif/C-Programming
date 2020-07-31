#include <stdio.h>                 


/*
 Prints the first parameters, returns the second parameter.
 */
int GetSecond(int param, int param2){
	
	printf("The Number is %d\n", param);

	return param2;
}

int main()
{   
	
    int x;         			// Declaration                 
    	
    x = GetSecond(5,7);	// Assignment

    printf("X is %d", x);

    return 0;                      
}


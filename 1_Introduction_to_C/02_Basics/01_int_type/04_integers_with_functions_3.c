#include <stdio.h>                 


/*
 Return the summation of two numbers.
 */
int sum(int param, int param2){

	return param + param2;
}

int main()
{   
	
    int x;         			// Declaration                 
    	
    x = sum(5,7);			// Assignment

    printf("X is %d", x);

    return 0;                      
}


#include <stdio.h>                 


int multiply(int param, int param2){
	return param * param2;
}

int sum(int param, int param2){
	return param + param2;
}

int main()
{   
	
    int x;         			                 
    	
    x = sum(5,7);			
    printf("X is %d", x);

    x = multiply(5,7);
    printf("\nNew x value is %d", x);

    return 0;                      
}


#include <stdio.h>                 


int Multiply(int param, int param2){
	return param * param2;
}

int Sum(int param, int param2){
	return param + param2;
}

int main()
{   
	
    int x;         			                 
    	
    x = Sum(5,7);			
    printf("X is %d", x);

    x = Multiply(5,7);
    printf("\nNew x value is %d", x);

    return 0;                      
}


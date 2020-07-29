#include <stdio.h>                 


int main()
{   
	// double type has 15 decimal points of precision
    double x = 5.987654321;         				                    
    printf("When we store as double -> %.9f", x);

    // float type has 6 decimal points of precision	
    float y = 5.987654321;							
    printf("\nWhen we store as float -> %.9f", y);


    return 0;                      
}
#include <stdio.h>                 


int main()
{   
	int x = 5.5;						// Implicit Casting, double --> int
	
	double y = (double)x;				// Explicit Casting, int --> double

	printf("%f", y);

    return 0;                      
}
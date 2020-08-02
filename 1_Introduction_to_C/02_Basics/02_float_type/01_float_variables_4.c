#include <stdio.h>                 

void PrintFloat(float x){
  printf("%.2f\n", x);
}

int main()
{   
	
    float x = 5.654321;  

    PrintFloat(x);
    PrintFloat(6.78);
    PrintFloat(8.42);
    
    return 0;                      
}
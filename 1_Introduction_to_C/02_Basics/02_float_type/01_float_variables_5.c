#include <stdio.h>                 

void PrintFloat(float x){
  printf("%.2f\n", x);
}

float Sum(float x, float y){
  float result;
  result = x + y;
  return result;
}

int main()
{   
	
    float x = Sum(5.46, 6.52);  

    PrintFloat(x);
    
    return 0;                      
}
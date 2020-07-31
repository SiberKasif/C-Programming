#include <stdio.h>                 

int Modulo(int param, int param2){
    return param % param2;
}

int Divide(int param, int param2){
    return param / param2;
}

int Multiply(int param, int param2){
    return param * param2;
}

int Sum(int param, int param2){
    return param + param2;
}

int main()
{   
    
    int x;                                   
        
    x = Sum(5, 7);          
    printf("X is %d", x);

    x = Multiply(5, 7);
    printf("\nNew x value is %d", x);

    x = Divide(15, 3);
    printf("\nThe Newest x value is %d", x);

    x = Modulo(4, 3);
    printf("\nLast value of x is %d", x);
    return 0;                      
}


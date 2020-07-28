#include <stdio.h>                 

int modulo(int param, int param2){
    return param % param2;
}

int divide(int param, int param2){
    return param / param2;
}

int multiply(int param, int param2){
    return param * param2;
}

int sum(int param, int param2){
    return param + param2;
}

int main()
{   
    
    int x;                                   
        
    x = sum(5, 7);          
    printf("X is %d", x);

    x = multiply(5, 7);
    printf("\nNew x value is %d", x);

    x = divide(15, 3);
    printf("\nThe Newest x value is %d", x);

    x = modulo(4, 3);
    printf("\nLast value of x is %d", x);
    return 0;                      
}


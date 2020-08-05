#include<stdio.h>

// ++x --> prefix increment, yani ön ek olarak artım

int main(){

    int x = 5;

    // parametre olarak ++x ifadesi --> 2 assembly komutu
    printf("%d\n", ++x);
    printf("%d", x);

	return 0;
}
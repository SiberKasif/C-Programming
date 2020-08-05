#include<stdio.h>

/* Run this code at https://godbolt.org/ to see assembly codes */

// ++x --> prefix increment, yani ön ek olarak artım

int main(){

    int x = 5;

    // parametre olarak ++x ifadesi
    // Assembly komutlarında 8 ve 9.satır
    printf("%d", ++x);

	return 0;
}
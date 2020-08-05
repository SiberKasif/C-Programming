#include<stdio.h>

/* Run this code at https://godbolt.org/ to see assembly codes */

// x++ --> postfix increment, yani son ek olarak artım

int main(){

    // parametre olarak x++ ifadesi
    // Assembly komutlarında 8, 9 ve 10.satır
	int x = 5;
    printf("%d", x++);

	return 0;
}
#include<stdio.h>

// x++ --> postfix increment, yani son ek olarak artım

int main(){

	int x = 5;

    // parametre olarak x++ ifadesi --> 3 assembly komutu
    printf("%d\n", x++);
    printf("%d",x );

	return 0;
}
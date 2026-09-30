#include <stdio.h>

//defineeritud konstantide kasutamine:

#define HELLO "Tere!\n"
#define A 2

int main(void){
	printf(HELLO);
	int b = A + A;
	printf("%d ja %d summa on %d\n", A, A, b);
}
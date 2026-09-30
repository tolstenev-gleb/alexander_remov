#include <stdio.h>

int main(void){
	double a, b;
	printf("Rakendus leiab täisarvude rea summa vahemikus A kuni B.\n");
	printf("Sisesta rea algus A: ");	
	if(scanf("%lg", &a) < 1){
		printf("A lugemine ebaõnnestus!\n");
		return 0;
	}
	printf("Sisesta rea lõpp B: ");	
	if(scanf("%lg", &b) < 1){
		printf("B lugemine ebaõnnestus!\n");
		return 0;
	}
	if(a <= b){
		double n = b - a + 1;
		double sum = n * (b + a) / 2;
		printf("Rea summa vahemikus %.0f kuni %.0f on %.0f\n", a, b, sum);
	}else{
		printf("A peab olema väiksem kui B!\n");
	}
}

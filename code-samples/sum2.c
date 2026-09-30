#include <stdio.h>

int main(void){
	int a, b;
	printf("Rakendus leiab täisarvude rea summa vahemikus A kuni B.\n");
	printf("Sisesta rea algus A: ");	
	if(scanf("%d", &a) < 1){
		printf("A lugemine ebaõnnestus!\n");
		return 0;
	}
	printf("Sisesta rea lõpp B: ");	
	if(scanf("%d", &b) < 1){
		printf("B lugemine ebaõnnestus!\n");
		return 0;
	}
	if(a <= b){
		long int n = b - a + 1;
		long int sum = n * (b + a) / 2;
		printf("Rea summa vahemikus %d kuni %d on %ld\n", a, b, sum);
	}else{
		printf("A peab olema väiksem kui B!\n");
	}
}
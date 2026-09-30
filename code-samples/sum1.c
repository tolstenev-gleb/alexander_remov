#include <stdio.h>

int main(void){
	int a, b;
	printf("Rakendus leiab täisarvude rea summa vahemikus A kuni B.\n");
	printf("Sisesta rea algus A: ");	

	if (scanf("%d", &a) < 1) {
		printf("A lugemine ebaõnnestus!\n");
		return 1;
	}

	printf("Sisesta rea lõpp B: ");	
	if (scanf("%d", &b) < 1) {
		printf("B lugemine ebaõnnestus!\n");
		return 1;
	}

	if (a <= b) {
		int sum = 0;
		int x = a;
		while (x <= b) {
			sum = sum + x;
			x = x + 1;
		}
		printf("Rea summa vahemikus %d kuni %d on %d\n", a, b, sum);
	} else {
		printf("A peab olema väiksem kui B!\n");
	}
	return 0;
}
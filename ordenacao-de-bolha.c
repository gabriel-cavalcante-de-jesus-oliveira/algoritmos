#include <stdio.h>
unsigned short valor[] = {1,4,3,9,8,6,10,7,5,2};
void exibeVetor() {
	unsigned short i;
	for(i = 0; i < 10; i++) {
		printf("%hu ", valor[i]);
	}
	puts("");
}
void troca(unsigned short i, unsigned short j) {
	valor[i] += valor[j];
	valor[j] = valor[i] - valor[j];
	valor[i] -= valor[j];
}
// ou bubble sort
void ordenacaoDeBolha() {
	unsigned short i, j;
	for(i = 0; i < 10; i++) {
		for(j = 0; j < 10; j++) {
			if(valor[j] > valor[i]) {
				troca(i, j);
			}
		}
	}
}
int main() {
	exibeVetor();
	ordenacaoDeBolha();
	exibeVetor();
	return 0;
}

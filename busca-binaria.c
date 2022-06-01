#include <stdio.h>
#include <stdlib.h>
#define TOTAL 10000
unsigned long valor[TOTAL];
void preencheVetor() {
	unsigned short i;
	// o vetor deve estar ordenado
	for(i = 0; i < TOTAL; i++) {
		valor[i] = i + 1;
	}
}
short buscaBinaria(long chave) {
	unsigned long inicio = 0, fim = TOTAL - 1, meio = (inicio + fim) / 2;
	if(inicio == fim) {
		if(valor[inicio] == chave) {
			return inicio;
		}
		return -1;
	}
	while(inicio <= fim) {
		if(valor[meio] == chave) {
			return meio;
		} else
			if(valor[meio] > chave) {
				fim = meio - 1;
			} else {
				inicio = meio + 1;
			}
		meio = (inicio + fim) / 2;
	}
	return -1;
}
int main(int argc, char *argv[]) {
	long indiceChave, chave = (long) strtol(argv[1], NULL, 10);
	preencheVetor();
	indiceChave = buscaBinaria(chave);
	if(indiceChave == -1) {
		puts("Valor não encontrado");
	} else {
		printf("Índice correspondente: %ld\n", indiceChave);
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
unsigned short valor[] = {5,2,3,1,9,8,7,6,10,4};
short buscaSequencial(unsigned short chave) {
	unsigned short i;
	for(i = 0; i < 10; i++) {
		if(valor[i] == chave) {
			return i;
		}
	}
	return -1;
}
int main(int argc, char *argv[]) {
	short indiceChave;
	unsigned short chave = (unsigned short) strtol(argv[1], NULL, 10);
	indiceChave = buscaSequencial(chave);
	if(indiceChave == -1) {
		puts("Valor não encontrado");
	} else {
		printf("Índice correspondente: %hd\n", indiceChave);
	}
	return 0;
}

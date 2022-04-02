#include <stdio.h>
#define TAM_ARRANJO 10
typedef unsigned short TipoArranjo;
TipoArranjo arranjo[] = {1,10,2,9,8,5,7,3,6,4}; // arranjo global desordenado
void troca(int i, int j) {
    int aux;
    // troca usando variável auxiliar
    aux = arranjo[i];
    arranjo[i] = arranjo[j];
    arranjo[j] = aux;
    // troca sem usar variável auxiliar
    /*arranjo[i] += arranjo[j];
    arranjo[j] = arranjo[i] - arranjo[j];
    arranjo[i] -= arranjo[j];*/
}
void bubbleSort() {
    signed short i, j;
    // ordem crescente
    /*for(i = TAM_ARRANJO - 1; i >= 0; i--) {
        for(j = TAM_ARRANJO - 1; j >= 0; j--) {
            if(arranjo[i] > arranjo[j]) {
                troca(i, j);
            }
        }
    }*/
    // ordem decrescente
    for(i = TAM_ARRANJO - 1; i >= 0; i--) {
        for(j = TAM_ARRANJO - 1; j >= 0; j--) {
            if(arranjo[i] < arranjo[j]) {
                troca(i, j);
            }
        }
    }
}
void saida() {
    unsigned short i;
    for(i = 0; i < TAM_ARRANJO; i++) {
        printf("%3d", arranjo[i]); //tamanho de campos
    }
    printf("\n");
}
int main() {
    bubbleSort();
    saida();
    return 0;
}

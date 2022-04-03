#include <stdio.h>
#define TAM_ARRANJO 10
typedef unsigned short TipoArranjo;
TipoArranjo arranjo[] = {1,10,2,9,8,5,7,3,6,4};
void insertionSort() {
    int i, j, aux;
    // ordem crescente
    for(i = 1; i < TAM_ARRANJO; i++) {
        aux = arranjo[i];
        j = i - 1;
        while((j >= 0) && (aux < arranjo[j])) {
            arranjo[j + 1] = arranjo[j];
            j--;
        }
        arranjo[j + 1] = aux;
    }
    // ordem decrescente
    /*for(i = 1; i < TAM_ARRANJO; i++) {
        aux = arranjo[i];
        j = i - 1;
        while((j >= 0) && (aux > arranjo[j])) {
            arranjo[j + 1] = arranjo[j];
            j--;
        }
        arranjo[j + 1] = aux;
    }*/
}
void saida() {
    unsigned short i;
    for(i = 0; i < TAM_ARRANJO; i++) {
        printf("%3hu", arranjo[i]);
    }
    printf("\n");
}
int main() {
    insertionSort();
    saida();
    return 0;
}

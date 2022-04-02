#include <stdio.h>
#define TAM_ARRANJO 10
typedef unsigned short TipoArranjo
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
    unsigned short aux;
    for(i = TAM_ARRANJO - 1; i >= 0; i--) {
        for(j = TAM_ARRANJO; j >= 0; j--) {
            if(arranjo[i] < arranjo[j]) {
                troca(i, j);
            }
        }
    }
}
int main() {
    return 0;
}

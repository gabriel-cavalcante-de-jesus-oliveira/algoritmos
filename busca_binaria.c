#include <stdio.h>
#include <string.h>
#define TAM_NOME 51
#define TAM_CURSO 31
#define QTD_ALUNOS 3
typedef long TipoChave;
typedef struct{
    char nome[TAM_NOME];
    TipoChave matricula;
    char curso[TAM_CURSO];
    int turma;
} Aluno;
Aluno a[QTD_ALUNOS], *ptrAluno = &a[0];
int main(){
    return 0;
}

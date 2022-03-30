#include <stdio.h>
#define TAM_NOME = 51
#define TAM_MATRICULA 21
#define TAM_CURSO 31
#define QTD_ALUNOS 40
typedef int TipoChave;
typedef struct{
    char nome[TAM_NOME];
    char matricula[TAM_MATRICULA];
    char curso[TAM_CURSO];
    int turma;
} Aluno;
Aluno a[QTD_ALUNOS], *ptr_aluno = &a[0];
int main(){
    return 0;
}

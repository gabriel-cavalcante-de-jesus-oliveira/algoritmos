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
void preencheRegistros(){
    strcpy(ptrAluno->nome, "Aluno 1");
    ptrAluno->matricula = 1111111;
    strcpy(ptrAluno->curso, "Curso 1");
    ptrAluno->turma = 1711;

    strcpy((ptrAluno + 1)->nome, "Aluno 2");
    (ptrAluno + 1)->matricula = 2222222;
    strcpy((ptrAluno + 1)->curso, "Curso 2");
    (ptrAluno + 1)->turma = 1712;

    strcpy((ptrAluno + 2)->nome, "Aluno 3");
    (ptrAluno + 2)->matricula = 3333333;
    strcpy((ptrAluno + 2)->curso, "Curso 3");
    (ptrAluno + 2)->turma = 1713;
}
int main(){
    return 0;
}

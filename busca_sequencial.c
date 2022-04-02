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
int buscaSequencial(TipoChave chave){
    int i, i_chave = -1;
    for(i = 0; i < QTD_ALUNOS; i++){
        if((ptrAluno + i)->matricula == chave){
            i_chave = i;
            break;
        }
    }
    return i_chave;
}
int main(){
    int i_chave;
    TipoChave chave;
    preencheRegistros();
    printf("Matrícula do aluno consultado: ");
    scanf("%ld", &chave); // especificador de formato para "signed long int"
    i_chave = buscaSequencial(chave);
    if(i_chave == -1){
        puts("Aluno não encontrado!");
    } else{
        puts("Aluno consultado");
        printf("Nome: %s\n", (ptrAluno + i_chave)->nome);
        printf("Matrícula: %ld\n", (ptrAluno + i_chave)->matricula);
        printf("Curso: %s\n", (ptrAluno + i_chave)->curso);
        printf("Turma: %d\n", (ptrAluno + i_chave)->turma);
    }
    return 0;
}

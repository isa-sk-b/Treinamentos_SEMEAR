#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_TAM_NOME 100

struct aluno {
    char nome[MAX_TAM_NOME];
    int idade;
};

int main () {
int i=0;
struct aluno Aluno[5];
char idade_char[3];

while(i<5) {
    int j=0;
    printf("\nDigite o nome do aluno: ");
    fflush(stdin);
    fgets(Aluno[i].nome,sizeof(Aluno[i].nome),stdin);
    if(strcmp(Aluno[i].nome,"\n")!=0) { // verificando se nada foi inserido (\n)
    while(Aluno[i].nome[j]!='\0') {
        if(Aluno[i].nome[j]=='\n')  {
            Aluno[i].nome[j] = '\0';
            break;
        }
        j++;
    }
    } else break;
    if(strcmp(Aluno[i].nome,"0")==0) break;
    printf("\nDigite a idade do aluno: ");
    fflush(stdin);
    fgets(idade_char,sizeof(idade_char),stdin);
    Aluno[i].idade = atoi(idade_char);
    i++;
}
int qtde_alunos = i+1; // i começa em 0, logo i é a qtde de alunos-1
i=0;
if(qtde_alunos!=1){
    printf("\nAlunos cadastrados: ");
    while(i<qtde_alunos-1) {
        printf("\n%s - %d anos",Aluno[i].nome,Aluno[i].idade);
        i++;
    }
    printf("\n");
}
else printf("\nNenhum aluno cadastrado!\n");
    return 0;
}

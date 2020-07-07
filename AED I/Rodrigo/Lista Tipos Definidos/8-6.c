# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int leDados();
void printBest(int aluno);

typedef struct a{
    char nome[15];
    int matricula, provas[3];
    float media;
} aluno;

aluno * turma;

int main(void){
    turma = (aluno*) calloc(5, sizeof(aluno));
    printBest(leDados());
    free(turma);
    return 0;
}

int leDados(){
    int maior = 0;
    int aluno;
    for (int i = 0; i < 5; i++){
        fflush(stdin);
        printf("Digite seu nome: ");
        fgets(turma[i].nome, 16, stdin);
        printf("Digite sua matricula: ");
        scanf("%d", &turma[i].matricula);

        for (int j = 0; j < 3; j++){
            printf("Digite a nota da %da prova: ", j+1);
            scanf("%d", &turma[i].provas[j]);
            turma[i].media += turma[i].provas[j];
        }

        turma[i].media = (float) turma[i].media / 3;

        if (turma[i].media > maior){
            maior = turma[i].media;
            aluno = i;
        }
    }

    return aluno;
}

void printBest(int aluno){
    fputs(turma[aluno].nome, stdout);
    for(int i = 0; i < 3; i++){
        printf("%d ", turma[aluno].provas[i]);
    }
}
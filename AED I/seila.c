# include <stdio.h>


float leDadosAlunos(), leDadosMatriz(), caluclarMedia();
void printMatriz();
int numAlunos, numProvas;


int main(void){
    leDadosAlunos();   

}

float leDadosAlunos(){
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &numAlunos);

    printf("Digite a quantidade de provas: ");
    scanf("%d", &numProvas);

    float turma[numAlunos][numProvas];
    leDadosMatriz(turma, numAlunos, numProvas);
}

float leDadosMatriz(float mat[][numProvas]){
    for(int aluno = 0; aluno < numAlunos; aluno++)
        for(int nota = 0; nota < numProvas; nota++){
            printf("Digite o valor da nota: ");
            scanf("%f", &mat[aluno][nota]);
        }
}

void printMatriz(float mat[][numProvas]){
    for(int aluno = 0; aluno < numAlunos; aluno++){
        for(int nota = 0; nota < numProvas; nota++){
            printf("%.0f", mat[aluno][nota]);
        }
    printf("\n");
    }
}

float calcularMedia(float mat){
    int mediaProvas[numAlunos];

    int soma = 0;

    for(int aluno = 0; aluno < numAlunos; aluno++){
        soma = 0;
        for(int nota = 0; nota < numProvas; nota++){
            soma += mat
        }
    printf("\n");
    }
}
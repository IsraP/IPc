# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <math.h>

int main ()
{   
    printf("\nPrograma para ler notas de alunos");

    int alunos;
    float nota;
    float media;
    int cont = 0;
    float maior = 0;
    float menor = 100;
    bool erro;
    float notas;

    printf("\nDigite a quantidade de alunos: ");
    scanf("%i", &alunos);

    do
    {
        do
        {   while(1){
            printf("\nDigite a nota do aluno: ");
            fflush(stdin);
            scanf("%f", &nota);
            if (nota >= 0 && nota <= 100) break;
            else printf("\nNota invalida\a");
        }
            if (nota > maior) maior = nota;
            if (nota < menor) menor = nota;
            if(nota < 60 && nota >0 ) printf("\nAluno reprovado!");
            else if (nota >= 60 && nota <= 100) printf("\nAluno aprovado!");
            erro = nota < 0 || nota > 100;
            if(erro) printf("\nNota invalida\a");
        }while(erro);

    notas = notas + nota;
    cont = cont + 1;
    media = notas / alunos;
    }
    while(alunos > cont);
    printf("\nA maior nota sera %f", maior);
    printf("\nA menor nota sera %f", menor);
    printf("\nA media sera %f\n", media);

    return 0;
}
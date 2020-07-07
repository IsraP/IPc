# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct a{
   char nome[15], esporte[15];
   float altura;
   int idade;  
} atleta;

atleta alto = {"aa", "aa", 0, 0}, velho = {"aa", "aa", 0, 0}, * atletas;

int main(void){
    atletas = (atleta *) calloc(5, sizeof(atleta));
    for (int i = 0; i < 5; i++){
        fflush(stdin);
        printf("Digite seu nome: ");
        gets(atletas[i].nome);
        printf("Digite seu esporte: ");
        gets(atletas[i].esporte);
        fflush(stdin);
        printf("Digite sua altura: ");
        scanf("%f", &atletas[i].altura);
        if(atletas[i].altura > alto.altura){
            alto = atletas[i];
        }
        printf("Digite sua idade: ");
        scanf("%d", &atletas[i].idade);
        if(atletas[i].idade > velho.altura){
            velho = atletas[i];
        }
    }

    printf("Mais alto: %s\nMais velho: %s.\n", alto.nome, velho.nome);

    free(atletas);
    return 0;
}
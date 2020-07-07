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
    atleta aux;
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
        printf("Digite sua idade: ");
        scanf("%d", &atletas[i].idade);
    }

    for (int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            if (atletas[j].idade < atletas[j+1].idade){
                aux = atletas[j];
                atletas[j] = atletas[j+1];
                atletas[j+1] = aux;
            }
        }
    }

    for (int i = 0; i < 5; i++){
        printf("Nome: %s, Esporte: %s, Altura: %f, Idade: %d\n", atletas[i].nome, atletas[i].esporte, atletas[i].altura, atletas[i].idade);
    }

    free(atletas);
    return 0;
}
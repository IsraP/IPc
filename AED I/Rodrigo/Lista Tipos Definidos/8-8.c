# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct p{
    char nome[15];
    int idade;
} pessoa;

pessoa maior = {"claudio", 0}, menor = {"Clovis", 10000}, * pessoas;


int main(void){
    pessoas = (pessoa *) calloc(6, sizeof(pessoa));
    for(int i = 0; i < 6; i++){
        fflush(stdin);
        printf("Digite seu nome: ");
        gets(pessoas[i].nome);
        printf("Digite sua idade: ");
        scanf("%d", &pessoas[i].idade);
        if (pessoas[i].idade > maior.idade)
            maior = pessoas[i];
        if(pessoas[i].idade < menor.idade)
            menor = pessoas[i];
    }

    printf("%s %d\n", maior.nome, maior.idade);
    printf("%s %d", menor.nome, menor.idade);

    free(pessoas);
    return 0;
}
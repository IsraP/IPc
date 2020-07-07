# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct p{
    char nome[15], endereco[100];
    int idade;
} pessoa;
pessoa * p1;

void leDados(pessoa *p), printDados(pessoa *p);

int main(void){
    p1 = (pessoa*) calloc(1, sizeof(pessoa));
    leDados(p1);
    return 0;
}

void leDados(pessoa *p){
    printf("Digite o seu nome: ");
    fgets(p->nome, 16, stdin);
    printf("Digite a sua idade: ");
    scanf("%d", &p->idade);
    fflush(stdin);
    printf("Digite o seu endereco: ");
    fgets(p->endereco, 100, stdin);

    printDados(p);
}

void printDados(pessoa * p){
    fputs(p->nome, stdout);
    printf("%d\n", p->idade);
    fputs(p->endereco, stdout);
    
}
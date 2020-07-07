# include <stdio.h>

int main(void){
    typedef struct c {
        int numero;
        char nome[15], CPF[15], email[30], telefone[15], rua[15], complemento[15], bairro[15], cidade[15], estado[2], CEP[10];
    } cliente;

    cliente c1;
    printf("Digite o seu nome: ");
    fgets(c1.nome, 100, stdin);
    printf("Digite o seu CPF: ");
    fgets(c1.CPF, 100, stdin);
    printf("Digite o seu email: ");
    fgets(c1.email, 100, stdin);
    printf("Digite o seu telefone: ");
    fgets(c1.telefone, 100, stdin);
    printf("Digite a sua rua: ");
    fgets(c1.rua, 100, stdin);
    printf("Digite o seu complemento: ");
    fgets(c1.complemento, 100, stdin);
    printf("Digite o seu numero: ");
    scanf("%d", &c1.numero);
    fflush(stdin);
    printf("Digite o seu bairro: ");
    fgets(c1.bairro, 100, stdin);
    printf("Digite a sua cidade: ");
    fgets(c1.cidade, 100, stdin);
    printf("Digite o seu estado: ");
    fgets(c1.estado, 100, stdin);
    printf("Digite o seu CEP: ");
    fgets(c1.CEP, 100, stdin);

    printf("%s, %s, %s, %s, %s, %s, %d, %s, %s, %s, %s", c1.nome, c1.CPF, c1.email, c1.telefone, c1.rua, c1.complemento, c1.numero, c1.bairro, 
    c1.cidade, c1.estado, c1.CEP);

    return 0;
}
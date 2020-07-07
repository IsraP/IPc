# include <stdio.h>

struct cliente {
        int numero;
        char nome[15], email[30], telefone[15];
        struct endereco{
            char CPF[15], rua[15], complemento[15], bairro[15], cidade[15], estado[2], CEP[10];
        }endereco;
    } cliente;
    struct cliente cli[100];
    int n;

void leCliente(), printCliente();

int main(void){
    printf("Digite a quantidade de clientes a serem lidos: ");
    scanf("%d", &n);
    leCliente(cli);
    return 0;
}

void leCliente(struct cliente *c1){
    for(int i = 0; i < n; i++){
        fflush(stdin);
        printf("Digite o seu nome: ");
        fgets(c1[i].nome, 100, stdin);
        printf("Digite o seu CPF: ");
        fgets(c1[i].endereco.CPF, 100, stdin);
        printf("Digite o seu email: ");
        fgets(c1[i].email, 100, stdin);
        printf("Digite o seu telefone: ");
        fgets(c1[i].telefone, 100, stdin);
        printf("Digite a sua rua: ");
        fgets(c1[i].endereco.rua, 100, stdin);
        printf("Digite o seu complemento: ");
        fgets(c1[i].endereco.complemento, 100, stdin);
        printf("Digite o seu numero: ");
        scanf("%d", &c1[i].numero);
        fflush(stdin);
        printf("Digite o seu bairro: ");
        fgets(c1[i].endereco.bairro, 100, stdin);
        printf("Digite a sua cidade: ");
        fgets(c1[i].endereco.cidade, 100, stdin);
        printf("Digite o seu estado: ");
        fgets(c1[i].endereco.estado, 100, stdin);
        printf("Digite o seu CEP: ");
        fgets(c1[i].endereco.CEP, 100, stdin);
    }
    

    printCliente(c1);
}

void printCliente(struct cliente *c1){
    for(int i = 0; i < n; i++){
        fputs(c1[i].nome, stdout);
        fputs(c1[i].endereco.CPF, stdout);
        fputs(c1[i].email, stdout);
        fputs(c1[i].telefone, stdout);
        fputs(c1[i].endereco.rua, stdout);
        fputs(c1[i].endereco.complemento, stdout);
        printf("%d\n", c1[i].numero, stdout);
        fputs(c1[i].endereco.cidade, stdout);
        fputs(c1[i].endereco.estado, stdout);
        fputs(c1[i].endereco.CEP, stdout);
    }
}

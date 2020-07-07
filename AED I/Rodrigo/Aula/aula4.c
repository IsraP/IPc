# include <stdio.h>
# include <string.h>
# include <stdlib.h>

/* Tipos definidos pelo usuario:
1. Struct - Estrutura
2. Union -  União
3. Enum - Enumeração
*/

struct contato{
    struct endereco {
        char rua[15], bairro[15], cidade[15], cep[15];
        int numero;
    } end;
    struct social {
        int codigo;
        char user[15];
    } insta, github;

    // Membros - variáveis - campos
    char nome[15], email[25], celular[10];
    int idade;
} c1;

typedef struct {
    int matricula;
    char nome[20];
} student;

student alunos[2];

void cadastrar(int i), mostrar(int i);

student * alunosPonteiro;

int main(void){
    student * students;
    students = (student*) malloc(sizeof(student));
    alunosPonteiro = (student*) calloc(3, sizeof(student));
    
    BlocoContato: {
    strcpy(c1.nome, "Israel");
    strcpy(c1.email, "israelperesol@gmail.com");
    strcpy(c1.celular, "993011475");
    c1.idade = 18;
    strcpy(c1.end.rua, "Minha rua");
    strcpy(c1.end.bairro, "Meu bairro");
    strcpy(c1.end.cidade, "Minha cidade");
    strcpy(c1.end.cep, "Meu cep");
    c1.end.numero = 15;

    strcpy(c1.insta.user, "israperesol");
    c1.insta.codigo = 1;
    strcpy(c1.github.user, "IsraP");
    c1.github.codigo = 2;
    
    student Israel = {123456, "Israel"};
    puts(Israel.nome);

    strcpy(students->nome, "Peres");
    puts(students->nome);
    }


    for(int i = 0; i < 3; i++){
        cadastrar(i);
    }
    for(int i = 0; i < 3; i++){
        mostrar(i);
    }

    return 0;
}

void cadastrar(int i){
    printf("Digite o seu nome: ");
    fflush(stdin);
    fgets(alunosPonteiro[i].nome, 20, stdin);
    printf("Digite a sua matricula: ");
    scanf("%d", &alunosPonteiro[i].matricula);
}

void mostrar(int i){
    char string[100] = "Nome: ";
    strcat(string, alunosPonteiro[i].nome);
    printf("%s", string);
    printf("Matricula: %d\n", alunosPonteiro[i].matricula);
    puts(" ");
}
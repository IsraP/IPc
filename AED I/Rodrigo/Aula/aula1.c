# include <stdio.h>
# include <stdlib.h>
# include <string.h>
// https://jeffersonpalheta.wordpress.com/2017/09/30/entendendo-a-tabela-ascii-e-o-tipo-char/

void matriz(){
    int matriz[2][5] = { {1, 2, 3, 4, 5},
                         {10, 9, 8, 7, 6} };

    
    for(int lin = 0 ; lin <= 1 ; lin++){
        for(int col = 0; col <= 4; col++){
            printf("%d ", matriz[lin][col]);
        }
        printf("\n");
    }
    printf("\n");
}

void string(){
    char nome[] = "Israel Peres";
    int tamanho = sizeof nome / sizeof nome[0];
    for (int carac = 0; carac <= tamanho-1 ; carac++){
        printf("%c", nome[carac]);
    }
    puts("\n");
}

void pegar(){
    char name[30];
    puts("Digite seu nome: ");
    gets(name);
    printf("Seu nome e ");
    puts(name);
    printf("\n");

}

void concat(){
    char nome[15];
    char sobrenome[50];
    char space[1] = " ";

    printf("Digite seu nome: ");
    gets(nome);
    printf("Digite seu sobrenome: ");
    gets(sobrenome);

    strcat(nome, " ");
    strcat(nome, sobrenome);
    puts(nome);
    printf("\n");
}

void copia(){
    char declarado[30];
    // declarado = "declarei" nao pode
    strcpy(declarado, "Declarei");
    puts(declarado);
    printf("\n");
}

void matrix(){
    int matriz[3][5];
    int contador = 1;
    for(int lin = 0; lin <= 2 ; lin++){
        for(int col = 0; col <= 3 ; col++){
            matriz[lin][col] = contador;
            printf("%d ", matriz[lin][col]);
            contador++;
        }
        printf("\n");
    }
}

int main(void){
    matriz();
    string();
    // pegar();
    // concat();
    copia();
    matrix();

    return 0;
}
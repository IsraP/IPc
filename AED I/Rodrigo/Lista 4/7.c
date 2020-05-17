# include <stdio.h>

int main(void){
    int vetor[10];
    int qtdImpar = 0;

    for (int i = 0; i < 10 ; i++){
        printf("Digite um valor para adicionar ao vetor: ");
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 1){
            qtdImpar++;
        }
    }

    printf("qtd de Impares = %d", qtdImpar);

    return 0;
}
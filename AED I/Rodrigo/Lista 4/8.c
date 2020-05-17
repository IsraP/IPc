# include <stdio.h>

int main(void){
    int vetor[10];
    int somaImpar = 0;
    int mediaPar = 0;

    for (int i = 0; i < 10 ; i++){
        printf("Digite um valor para adicionar ao vetor: ");
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 1){
            somaImpar += vetor[i];
        }
        else{
            mediaPar += vetor[i];
        }
    }

    printf("soma dos Impares = %d\n", somaImpar);
    printf("Media dos Pares = %d", mediaPar / 10);

    return 0;
}
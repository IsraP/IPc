# include <stdio.h>

int main(void){
    int vetor[10], posicao = 9, aux;

    for (int i = 0; i < 10 ; i++){
        printf("Digite um valor para adicionar ao vetor: ");
        scanf("%d", &vetor[i]);
    }
    for(int i = 0; i < 5; i++, posicao--){
        aux = vetor[posicao];
        vetor[posicao] = vetor[i];
        vetor[i] = aux;
    }

    for (int i = 0; i < 10 ; i++){
        printf("%d ", vetor[i]);
    }
    return 0;
}
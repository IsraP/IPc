# include <stdio.h>

int main(void){
    int vetor[10], invertido[10], posicao = 9;

    for (int i = 0; i < 10 ; i++){
        printf("Digite um valor para adicionar ao vetor: ");
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++, posicao--){
        invertido[posicao] = vetor[i];
    }

    for (int i = 0; i < 10 ; i++){
        printf("%d ", invertido[i]);
    }
    return 0;
}
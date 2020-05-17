# include <stdio.h>

int main(void){
    int vetor[10];
    for (int i = 0; i < 10 ; i++){
        printf("Digite um valor para adicionar ao vetor: ");
        scanf("%d", &vetor[i]);
    }
    printf("Vetor: ");
    for (int i = 1; i <= 9; i += 2){
        printf("%d ", vetor[i]);
    }
    return 0;
}
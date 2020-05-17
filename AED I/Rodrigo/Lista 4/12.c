# include <stdio.h>

int main(void){
    int vetor[10];
    int posicao = 0;

    for (int i = 1; i <= 20 ; i++){
        if (i % 2 == 0){
            vetor[posicao] = i;
            posicao++;
        }
    }

    return 0;
}
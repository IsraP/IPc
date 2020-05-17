# include <stdio.h>

int main(void){
    int vet[10], vetPar[5], vetImpar[5], posicao = 0, posicao2 = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite o valor a ser adicionado ao vetor: ");
        scanf("%d", &vet[i]);
    }

    for(int i = 0; i < 10; i++){
       if(vet[i] % 2 == 0 && posicao <= 5){
           vetPar[posicao] = vet[i];
           posicao++;
       }
       else if(vet[i] % 2 == 1 && posicao2 <= 5){
           vetImpar[posicao2] = vet[i];
           posicao2++;
       }
    }

    
    return 0;
}
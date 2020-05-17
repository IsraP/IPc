# include <stdio.h>


int main(void){
    int vetor[10], maiorPar = 0, menorImpar = 1000000, contPar = 0, contImpar = 0;
    float mediaPar, mediaImpar;

    for(int i = 0; i < 10; i++){
        printf("Digite o numero a ser adicionado ao vetor: ");
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0){

            mediaPar += vetor[i];
            contPar++;

            if (vetor[i] > maiorPar){
                maiorPar = vetor[i];
            }
        }
        else{

            mediaImpar += vetor[i];
            contImpar++;

            if (vetor[i] < menorImpar){
                menorImpar = vetor[i];
            }
        }
    }

    mediaImpar = mediaImpar / contImpar;
    mediaPar = mediaPar / contPar;

    printf("Media dos Pares = %.1f\n", mediaPar);
    printf("Media dos Impares = %.1f\n", mediaImpar);
    printf("Maior par = %d\n", maiorPar);
    printf("Menor Impar = %d\n", menorImpar);

    return 0;
    
}
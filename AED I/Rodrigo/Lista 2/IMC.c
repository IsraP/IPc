# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main(void){
    float peso, altura, IMC;
    printf("Digite o valor do seu peso: ");
    scanf("%f", &peso);
    printf("Digite o valor do seu altura: ");
    scanf("%f", &altura);
    IMC = peso / pow(altura, 2);
    if (IMC > 20 && IMC < 25){
        printf("Voce esta dentro do peso ideal :)\n");
    }
    else{
        printf("Voce nao esta dentro do peso ideal :(\n");
    }
    return 0;
}
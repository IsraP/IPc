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
        printf("Voce esta dentro do peso ideal (IMC entre 20 e 25)\n");
    }
    else if(IMC > 20){
        
    }
    return 0;
}
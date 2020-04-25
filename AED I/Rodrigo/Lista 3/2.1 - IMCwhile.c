# include <stdio.h>
# include <stdlib.h>

int main(void){
    int idade, acima = 0, abaixo = 0, meio = 0;
    float peso, altura, IMC;
    char resposta;

    while(1){
        printf("Digite a sua idade: ");
        scanf("%d", &idade);
        printf("Digite a sua altura: ");
        scanf("%f", &altura);
        printf("Digite a sua peso: ");
        scanf("%f", &peso);

        IMC = peso / (altura * altura);

        if (IMC < 18){
            printf("Abaixo do peso ideal.\n\n");
            abaixo++;
            }
        else if (IMC > 25){
            printf("Acima do peso ideal.\n\n");
            acima++;
        }
            

        else{
            printf("Dentro do peso ideal.\n\n");
            meio++;
        }
            
        printf("Deseja testar outra pessoa? (s/n)\n\n");
        scanf(" %c", &resposta);
        if (resposta == 'n' || resposta == 'N')
            break;
        }

    printf("Acima do ideal = %d | Dentro do ideal = %d | Abaixo do ideal = %d", acima, meio, abaixo);
    return 0;
}
# include <stdio.h>
# include <stdlib.h>

int main(void){
    int x, y, booleano = 0;
    printf("Digite o valor do x: ");
    scanf("%d", &x);
    printf("Digite o valor do y: ");
    scanf("%d", &y);
    printf("Os primos no intervalo [%d, %d] = ", x, y);

    for(int num = x ; num <= y ; num++){

        for(int iterador = x ; iterador <= num ; iterador++){
            if(num % iterador == 0 && num != iterador && iterador != 1){
                booleano = 1;
                break;
            }
        }

        if(booleano == 0 && num != 1)
                printf("%d ", num);
        else
            booleano = 0;
    }
    return 0;
}
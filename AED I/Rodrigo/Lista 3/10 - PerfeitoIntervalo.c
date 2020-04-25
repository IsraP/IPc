# include <stdio.h>
# include <stdlib.h>

int main(void){
    int soma, x, y;
    printf("Digite o valor do x: ");
    scanf("%d", &x);
    printf("Digite o valor do y: ");
    scanf("%d", &y);


    for(int num = x ; num <= y ; num++){
        soma = 0;
        for (int iterador = x ; iterador < num ; iterador++){
        if (num % iterador == 0)
            soma += iterador;
        }
        if (soma == num){
            printf("%d ", num);
        }
    }
    return 0;
}
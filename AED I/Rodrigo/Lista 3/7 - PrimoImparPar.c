# include <stdio.h>
# include <stdlib.h>

int main(void){
    for(int i = 0; i < 10; i++){
        int num, booleano = 0;
        printf("Digite o valor do numero: ");
        scanf("%d", &num);
        if (num % 2 == 0)
            printf("O numero %d = Par e ", num);
        else
            printf("O numero %d = Impar e ", num);
        for(int i = 2; i < num; i++){
            if(num % i == 0){
                printf("nao primo.\n", num);
                booleano = 1;
                break;
            }
        }
        if (booleano == 0)
            printf("primo\n");
    }
}
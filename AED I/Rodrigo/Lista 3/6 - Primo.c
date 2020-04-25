# include <stdio.h>
# include <stdlib.h>

int main(void){
    int num, booleano = 0;
    printf("Digite o valor do num: ");
    scanf("%d", &num);
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            printf("O numero %d nao e primo.", num);
            booleano = 1;
            break;
        }
    }
    if (booleano == 0)
        printf("O numero %d = primo.", num);
    return 0;
}
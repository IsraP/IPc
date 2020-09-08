# include <stdio.h>
# include <stdlib.h>

int main(void){
    int num;
    printf("Digite o valor do numero: ");
    scanf("%d", &num);
    if (num >= 0){
        printf("O numero %d = Positivo\n", num);
    }
    else{
        printf("O numero %d = Negativo\n", num);
    }
    return 0;
}
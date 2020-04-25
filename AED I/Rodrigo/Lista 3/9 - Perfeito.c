# include <stdio.h>
# include <stdlib.h>

int main(void){
    int num, soma = 0;
    printf("Digite o valor do numero a ser testado: ");
    scanf("%d", &num);
    for (int i = 1 ; i < num ; i++){
        if (num % i == 0)
            soma += i;
    }
    if(num == soma)
        printf("O numero e perfeito.\n");

    else
        printf("O numero nao e perfeito.\n");
    
    return 0;
}
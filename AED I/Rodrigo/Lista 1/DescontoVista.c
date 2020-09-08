# include <stdio.h>
# include <stdlib.h>

int main(){
    float valor;
    float desconto = 0.92, final;
    printf("Digite o valor do item: ");
    scanf("%f", &valor);
    final = valor * desconto;
    printf("O valor do item com desconto vale: %f", final);
    return 0;
}
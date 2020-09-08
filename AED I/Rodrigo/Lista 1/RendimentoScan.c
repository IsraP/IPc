# include <stdio.h>
# include <stdlib.h>

int main(){
    float valor, rendimento, final;
    printf("Digite quanto vale o valor: ");
    scanf("%f", &valor);
    printf("Digite quanto vale o rendimento: ");
    scanf("%f", &rendimento);
    final = valor * (rendimento/100);
    printf("O valor final vale: %f", final);
    return 0;
}
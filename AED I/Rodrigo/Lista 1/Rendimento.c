# include <stdio.h>
# include <stdlib.h>

int main(){
    float valor, rendimento,  final;
    rendimento = 1.13/100;
    printf("Digite quanto vale o valor: ");
    scanf("%f", &valor);
    final = valor * rendimento;
    printf("O valor final vale: %f", final);
    return 0;
}
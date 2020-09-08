# include <stdio.h>
# include <stdlib.h>

int main(){
    int parcelas;
    float valor, taxa = 1.12, parcelafinal;
    printf("Digite o valor total: ");
    scanf("%f", &valor);
    printf("Digite o numero de parcelas: ");
    scanf("%d", &parcelas);
    parcelafinal = (valor * taxa) / parcelas;
    printf("O valor de cada parcela vale: %f\n", parcelafinal);
    return 0;

}
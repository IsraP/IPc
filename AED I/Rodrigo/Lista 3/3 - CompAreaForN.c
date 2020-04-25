# include <stdio.h>
# include <stdlib.h>

int main(void){
    float const pi = 3.14;
    int n1, n2, passo;

    printf("Digite o valor do n1: ");
    scanf("%d", &n1);
    printf("Digite o valor do n2: ");
    scanf("%d", &n2);
    printf("Digite o valor do passo: ");
    scanf("%d", &passo);

    for(int r = n1; r <= n2; r += passo){
        float comprimento = 2 * pi * r; 
        float area = pi * (r * r);
        printf("Raio = %d | Area = %f | Comprimento = %f\n", r, area, comprimento);
    }
    return 0;
}
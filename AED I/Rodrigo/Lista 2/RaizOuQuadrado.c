# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main(void){
    double num, raiz, quadrado;
    printf("Digite o valor do numero: ");
    scanf("%lf", &num);
    if (num > 0){
        raiz = sqrt(num);
        printf("O valor da raiz do numero positivo = %lf\n", raiz);
    }
    else{
        quadrado = pow(num, 2);
        printf("O quadrado do numero negativo = %lf\n", quadrado);
    }
    return 0;
}
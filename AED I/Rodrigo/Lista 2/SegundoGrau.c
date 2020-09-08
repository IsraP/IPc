# include <stdio.h>
# include <stdlib.h>
#include <math.h>

int main(void){
    float a, b, c, delta, x1, x2;
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    delta = (b * b) - (4 * a * c);
    if (delta < 0){
        printf("Delta menor que zero. Impossivel calcular.\n");
    }
    else if(delta == 0){
        x1 = (-b + sqrt(delta)) / (2 * a);
        printf("As duas raizes possuem o mesmo valor real de %f\n", x1);
    }
    else{
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raizes possuem valor real, e valem %f e %f\n", x1, x2);
    }
    return 0;
}
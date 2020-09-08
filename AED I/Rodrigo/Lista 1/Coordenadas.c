# include <stdio.h>
# include <stdlib.h>
#include <math.h>

int main(){
    double x1, x2, y1, y2, distancia;
    printf("Digite o valor do x1: ");
    scanf("%lf", &x1);
    printf("Digite o valor do x2: ");
    scanf("%lf", &x2);
    printf("Digite o valor do y1: ");
    scanf("%lf", &y1);
    printf("Digite o valor do y2: ");
    scanf("%lf", &y1);
    distancia = pow(pow((x1 - x2), 2) + pow((y1 - y2), 2), 0.5);
    printf("O valor da distancia = %lf", distancia);
    return 0;
}
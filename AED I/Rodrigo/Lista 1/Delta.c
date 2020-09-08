# include <stdio.h>
# include <stdlib.h>


int main(){
    float a, b, c, delta;
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    delta = (b * b) - (4 * a * c);
    printf("O delta = %f\n", delta);
    return 0;
}
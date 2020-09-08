# include <stdio.h>
# include <stdlib.h>

int main(){
    float lado, altura, area, perimetro;
    printf("Digite lado: ");
    scanf("%f", &lado);
    printf("Digite altura: ");
    scanf("%f", &altura);
    area = lado * altura;
    perimetro = 2 * (lado + altura);
    printf("area = %f, perimetro = %f\n", area, perimetro);
    return 0;
}
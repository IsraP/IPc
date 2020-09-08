# include <stdio.h>
# include <stdlib.h>

int main(){
    float raio, perimetro;
    const float pi = 3.14;
    printf("Digite o raio: ");
    scanf("%f", &raio);
    perimetro = 2 * pi * raio;
    printf("O valor do perimetro = %f", perimetro);
    return 0;
}
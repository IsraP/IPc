# include <stdio.h>
# include <stdlib.h>

int main(){
    float raio, area;
    const float pi = 3.14;
    printf("Digite o valor do raio");
    scanf("%f", &raio);
    area = pi * (raio * raio);
    printf("A area da circunferencia = %f", area);
    return 0;
}
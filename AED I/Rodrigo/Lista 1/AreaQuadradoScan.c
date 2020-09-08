# include <stdio.h>
# include <stdlib.h>

int main(){
    float lado, area;
    printf("\nDigite o valor do lado.\n");
    scanf("%f", &lado);
    area = lado * lado;
    printf("A area = %f\n", area);
}
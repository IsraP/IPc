# include <stdio.h>
# include <stdlib.h>

int main(){
    float lado, area;
    printf("digite lado:");
    scanf("%f", &lado);
    area = lado * lado;
    printf("Area = %f\n", area);
    return 0;
}
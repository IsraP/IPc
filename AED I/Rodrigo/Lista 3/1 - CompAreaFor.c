# include <stdio.h>
# include <stdlib.h>

int main(void){
    float const pi = 3.14;
    for(int r = 5; r <= 15; r++){
        float comprimento = 2 * pi * r; 
        float area = pi * (r * r);
        printf("Raio = %d | Area = %f | Comprimento = %f\n", r, area, comprimento);
    }
    return 0;
}
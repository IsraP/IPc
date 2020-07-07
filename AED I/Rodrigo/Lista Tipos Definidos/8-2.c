# include <stdio.h>
# include <math.h>

typedef struct xy {
    int x, y;
} coords;

coords p1;

int main(void){
    printf("Digite o valor do X: ");
    scanf("%d", &p1.x);
    printf("Digite o valor do Y: ");
    scanf("%d", &p1.y);

    float distancia = sqrt(pow(p1.x, 2) + pow(p1.y, 2));

    printf("A distancia entre dois pontos e de %f", distancia);

    return 0;
}
# include <stdio.h>
# include <math.h>

typedef struct xy {
    int x, y;
} coords;

coords p[2];

int main(void){
    for(int i = 0; i < 2; i++){

    printf("Digite o valor do X: ");
    scanf("%d", &p[i].x);
    printf("Digite o valor do Y: ");
    scanf("%d", &p[i].y);

    }

    float distancia = sqrt(pow((p[1].x - p[0].x), 2) + pow((p[1].y - p[0].y), 2));

    printf("A distancia entre dois pontos e de %f", distancia);

    return 0;
}
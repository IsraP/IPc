# include <stdio.h>
# include <math.h>

typedef struct r{
    struct ponto{
        int x, y;
    } p1, p2;
} retangulo;

retangulo ret1;

int main(void){
        printf("Digite o valor do X1: ");
        scanf("%d", &ret1.p1.x);
        printf("Digite o valor do Y1: ");
        scanf("%d", &ret1.p1.y);
        printf("Digite o valor do X2: ");
        scanf("%d", &ret1.p2.x);
        printf("Digite o valor do Y2: ");
        scanf("%d", &ret1.p2.y);

    float diagonal = sqrt(pow((ret1.p2.x - ret1.p1.x), 2) + pow((ret1.p2.y - ret1.p1.y), 2));
    int area = (ret1.p1.x - ret1.p2.x) * (ret1.p1.y - ret1.p2.y);

    printf("A diagonal vale %f\n", diagonal);
    printf("A area do retangulo vale %d", area);

    return 0;
}
# include <stdio.h>
# include <math.h>

typedef struct r{
    struct ponto{
        int x, y;
    } p1, p2, p3;
} retangulo;

retangulo ret1;

int main(void){
    int *x1, *x2, *x3, *y1, *y2, *y3;

    printf("Digite o valor do X1: ");
    scanf("%d", &ret1.p1.x);
    printf("Digite o valor do Y1: ");
    scanf("%d", &ret1.p1.y);
    printf("Digite o valor do X2: ");
    scanf("%d", &ret1.p2.x);
    printf("Digite o valor do Y2: ");
    scanf("%d", &ret1.p2.y);
    printf("Digite o valor do X3: ");
    scanf("%d", &ret1.p3.x);
    printf("Digite o valor do Y3: ");
    scanf("%d", &ret1.p3.y);

    x1 = &ret1.p1.x;
    x2 = &ret1.p2.x;
    x3 = &ret1.p3.x;
    y1 = &ret1.p1.y;
    y2 = &ret1.p2.y;
    y3 = &ret1.p3.y;

    if((*x3 >= *x1 && *x3 <= *x2) && (*y3 >= *y1 && *y3 <= *y2)){
        printf("Dentro do retangulo.");
    }
    else{
        printf("Fora do retangulo.");
    }

    return 0;
}
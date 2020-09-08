# include <stdio.h>
# include <stdlib.h>

int main(void){
    int a, b, c;
    printf("Digite o valor do A: ");
    scanf("%d", &a);
    printf("Digite o valor do B: ");
    scanf("%d", &b);
    printf("Digite o valor do C: ");
    scanf("%d", &c);
    if (a > b > c){
        printf("%d, %d, %d\n", a, b, c);
    }
    else if (b > a && a > c){
        printf("%d, %d, %d\n", b, a, c);
    }
    else if (a > c && c > b){
        printf("%d, %d, %d\n", a, c, b);
    }
    else if (b > c && c > a){
        printf("%d, %d, %d\n", b, c, a);
    }
    else if (c > a && a > b){
        printf("%d, %d, %d\n", c, a, b);
    }
    else if (c > b && b > a){
        printf("%d, %d, %d\n", c, b, a);
    }
    return 0;
}
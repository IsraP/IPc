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
    if (a > b && b > c){
        printf("%d\n", a-c);
    }
    else if (b > a && a > c){
        printf("%d\n", b-c);
    }
    else if (a > c && c > b){
        printf("%d\n", a-b);
    }
    else if (b > c && c > a){
        printf("%d\n", b-a);
    }
    else if (c > a && a > b){
        printf("%d\n", c-b);
    }
    else if (c > b && b > a){
        printf("%d\n", c-a);
    }
    return 0;
}
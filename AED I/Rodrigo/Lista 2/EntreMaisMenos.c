# include <stdio.h>
# include <stdlib.h>

int main(void){
    int a, b, c;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);
    if (a > b && a < c){
        printf("Entre B e C\n");
    }
    else if (a > b){
        printf("Maior que B\n");
    }
    else if (a < c){
        printf("Menor que C\n");
    }
}
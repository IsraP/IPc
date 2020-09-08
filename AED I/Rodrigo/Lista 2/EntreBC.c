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
    if (a < b && a > c){
        printf("A esta entre b e c\n");
    }
    else if (a > b && a < c){
        printf("A esta entre b e c\n");
    }
    return 0;
}
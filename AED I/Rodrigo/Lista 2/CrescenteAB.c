# include <stdio.h>
# include <stdlib.h>

int main(void){
    int a, b;
    printf("Digite o valor do A: ");
    scanf("%d", &a);
    printf("Digite o valor do B: ");
    scanf("%d", &b);
    if (a > b){
        printf("%d, %d\n", b, a);
    }
    if (b > a){
        printf("%d, %d\n", a, b);
    }
    return 0;
}
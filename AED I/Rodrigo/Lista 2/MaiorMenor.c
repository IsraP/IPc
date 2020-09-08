# include <stdio.h>
# include <stdlib.h>

int main(void){
    int n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    if (n1 > n2){
        printf("%d > %d\n", n1, n2);
    }
    if (n1 < n2){
        printf("%d > %d\n", n2, n1);
    }
    return 0;
}
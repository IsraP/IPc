# include <stdio.h>
# include <stdlib.h>

int main(void){
    int num;
    printf("Digite numero: ");
    scanf("%d", num);
    if (num < 0) printf("Negativo.\n");
    if (num > 0) printf("Positivo.\n");
    else printf("Nulo.\n");
    return 0;
}
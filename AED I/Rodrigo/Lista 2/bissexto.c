# include <stdio.h>
# include <stdlib.h>

int main(void){
    int ano;
    printf("Digite o ano: ");
    scanf("%d", &ano);
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) printf("Ano bissexto.\n");
    else printf("Ano comum.\n");
    return 0;
}
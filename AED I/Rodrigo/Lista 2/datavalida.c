# include <stdio.h>
# include <stdlib.h>

int main(void){
    int dia, mes, ano;
    printf("Digite a data ai namoral: ");
    scanf("%d %d %d", &dia, &mes, &ano);
    if (ano > 1990 && ano < 2100) printf("%d/%d/%d\n", dia, mes, ano);
    else printf("Data invalida.\n");
    return 0;
}
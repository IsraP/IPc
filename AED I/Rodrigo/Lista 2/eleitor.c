# include <stdio.h>
# include <stdlib.h>

int main(void){
    int idade;
    printf("Digite o valor de sua idade: ");
    scanf("%d", &idade);
    if (idade < 16) printf("Nao eleitor.\n");
    else if ((idade > 16 && idade < 18) || idade > 65) printf("Eleitor nao obrigatorio.\n");
    else printf("Eleitor obrigatorio.\n");
    return 0;
}
# include <stdio.h>
# include <string.h>

int digitos(), i = 0, qtd = 0;

int main(void){
    char num[100], digit;

    puts("Programa para calcular quantos digitos em determinado numero\n");
    puts("Digite o valor do numero: ");
    fgets(num, 100, stdin);
    puts("Digite o valor do digito");
    scanf(" %c", &digit);

    printf("A quantidade de digitos no numero = %d", digitos(num, digit, i));
}

int digitos(char num[], int digit, int i){
    if(i > strlen(num))
        return qtd;
    else{
        if (num[i] == digit){
            qtd++;
        }
        return digitos(num, digit, i+1);
    }
        
}
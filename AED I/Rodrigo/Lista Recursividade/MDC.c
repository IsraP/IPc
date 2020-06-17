# include <stdio.h>

int MDCI(), MDCR(), maior = 0;

int main(void){
    int opcao, n1, n2;

    puts("Programa para achar o MDC de um numero de forma iterativa ou recursiva");
    puts("Digite 1 para Iterativa e 2 para recursiva");
    scanf("%d", &opcao);
    printf("Digite o valor do n1: ");
    scanf("%d", &n1);
    printf("Digite o valor do n2: ");
    scanf("%d", &n2);

    switch(opcao){
        case(1):
            printf("O maximo divisor comum = %d", MDCI(n1, n2));
            break;

        case(2):
            printf("O maximo divisor comum = %d", MDCR(n1 ,n2, 1));
            break;
    }

    return 0;
}

int MDCI(int n1, int n2){
    int maior = 0;
    if (n1 > n2){
        for (int i = 1; i <= n1; i++){
            if(n1 % i == 0 && n2 % i == 0 && i > maior)
                maior = i;
        }
    }
    else{
        for (int i = 1; i <= n2; i++){
            if(n1 % i == 0 && n2 % i == 0 && i > maior)
                maior = i;
        }
    }
    return maior;
}

int MDCR(int n1, int n2, int i){
    if(n1 % i == 0 && n2 % i == 0 && i > maior)
        maior = i;
    if (n1 < i)
        return maior;
    else{
        return MDCR(n1, n2, i + 1);
    }
    }

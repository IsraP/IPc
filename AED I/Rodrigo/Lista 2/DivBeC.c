# include <stdio.h>
# include <stdlib.h>

int main(void){
    int num1, num2, num3;
    printf("Digite o valor do primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o valor do segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o valor do terceiro numero: ");
    scanf("%d", &num3);
    if (num1 % num2 == 0 && num1 % num3 == 0){
        printf("O numero %d = divisivel por %d e %d\n", num1, num2, num3);
    }
    else{
        printf("O numero %d nao e divisivel por %d e %d ao mesmo tempo\n", num1, num2, num3);
    }
    return 0;
}
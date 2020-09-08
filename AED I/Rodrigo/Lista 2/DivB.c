# include <stdio.h>
# include <stdlib.h>

int main(void){
    int num1, num2;
    printf("Digite o valor do primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o valor do segundo numero: ");
    scanf("%d", &num2);
    if (num1 % num2 == 0){
        printf("O numero %d = divisivel por %d\n", num1, num2);
    }
    else{
        printf("O numero %d nao e divisivel por %d\n", num1, num2);
    }
    return 0;
}
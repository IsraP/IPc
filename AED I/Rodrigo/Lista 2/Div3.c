# include <stdio.h>
# include <stdlib.h>

int main(void){
    int num;
    printf("Digite o valor do numero: ");
    scanf("%d", &num);
    if (num % 3 == 0){
        printf("O numero %d = divisivel por 3\n", num);
    }
    else{
        printf("O numero %d nao e divisivel por 3\n", num);
    }
    return 0;
}
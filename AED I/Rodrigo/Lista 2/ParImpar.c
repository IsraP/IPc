# include <stdio.h>
# include <stdlib.h>

int main(void){
    int num;
    printf("Digite o valor do numero: ");
    scanf("%d", &num);
    if (num % 2 == 0){
        printf("O numero %d = Par\n", num);
    }
    else{
        printf("O numero %d = Impar\n", num);
    }
    return 0;
}
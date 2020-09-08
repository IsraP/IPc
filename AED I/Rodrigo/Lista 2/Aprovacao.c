# include <stdio.h>
# include <stdlib.h>

int main(void){
    int nota;
    printf("Digite sua nota: ");
    scanf("%d", &nota);
    if (nota >= 60){
        printf("Voce esta aprovado!!!!\n");
    }
    else{
        printf("Voce foi reprovado :(\n");
    }
    return 0;
}
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main(void){
    int num;
    printf("Diigte o valor do numero: ");
    scanf("%d", &num);
    if(num >= 0){
        printf("A raiz do numero = %f\n", sqrt(num));
    }
    else{
        printf("Impossivel calcular raiz quadrada de numero negativo\n");
    }
    return 0;
}
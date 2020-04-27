# include <stdio.h>

double percentual(double n, double percentual){
    percentual = (percentual / 100) + 1;
    double valor = n * percentual;
    return valor;
}

int main(void){
    printf("Adicao de 50%% a 100 = %.2f\n", percentual(100, 50));
    printf("Adicao de 30%% a 527 = %.2f\n", percentual(527, 30));
    return 0;
}
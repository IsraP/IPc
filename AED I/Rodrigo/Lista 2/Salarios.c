# include <stdio.h>
# include <stdlib.h>

int main(void){
    float salario, newsalario;
    printf("Digite o valor do salario: ");
    scanf("%f", &salario);
    if(salario < 1500){
        newsalario = salario * 1.1478 + 150;
        printf("O novo salario sera %f\n", newsalario);
    }
    else if(salario > 1500.01 &&  salario < 3000){
        newsalario = salario * 1.095 + 250;
        printf("O novo salario sera %f\n", newsalario);
    }
    else{
        newsalario = salario * 1.0643 + 450;
        printf("O novo salario sera %f\n", newsalario);
    }
    return 0;
}
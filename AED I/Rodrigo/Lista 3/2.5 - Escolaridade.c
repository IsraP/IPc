# include <stdio.h>
# include <ctype.h>

/*
10 – Faça um programa que leia a idade, salário, sexo e escolaridade (1 - 1º grau, 2 - 2º grau, 3 - superior
incompleto, 4 - superior completo) de diversas pessoas. Calcule e imprima:
a. Salário médio das pessoas que não tem faculdade
b. Percentual de entrevistados que possuem curso superior completo
*/

int main(void){
    int idade, escolaridade, total = 0, totalsemfacul = 0;
    char sexo, resposta;
    float salario, faculmedio = 0, suppercent = 0;

    while(1){
        total++;
        printf("Digite a sua idade: ");
        scanf("%d", &idade);

        printf("Digite o seu salario: ");
        scanf("%f", &salario);

        printf("Digite o seu sexo: ");
        scanf(" %c", &sexo);

        printf("Digite a sua escolaridade: \n1 - 1o grau \n2 - 2o grau \n3 - Superior incompleto"
        "\n4 - Superior completo\n");
        scanf("%d", &escolaridade);

        if (escolaridade == 1 || escolaridade == 2){
            faculmedio += salario;
            totalsemfacul++;
        }
            
        else if (escolaridade == 4)
            suppercent++;

        
        
        printf("Deseja adicionar mais uma pessoa? (s/n) ");
        scanf(" %c", &resposta);
        resposta = tolower(resposta);

        if (resposta == 'n')
            break;
    }

    faculmedio = (float)faculmedio / totalsemfacul;
    suppercent = ((float)suppercent / total) * 100;

    printf("Salario medio de quem nao possui faculdade = %.2f \nPorcentagem de quem possui" 
    "ensino superior completo = %.1f%%", faculmedio, suppercent);
    
    return 0;
}
# include <stdio.h>
# include <stdlib.h>

int main(void){
    int numM = 0, numH = 0, total = 0, aprovados = 0, aprovadosM = 0;
    float nota, percentualGeral, percentualM;
    char sexo, resposta;

    while(1){
        total++;
        printf("Digite o seu sexo: ");
        scanf(" %c", &sexo);
        printf("Digite o valor da nota: ");
        scanf("%f", &nota);

        if (sexo == 'f' || sexo == 'F'){
            numM++;
            if (nota >= 60){
                aprovados++;
                aprovadosM++;
            }
        }
        else{
            numH++;
            if (nota >= 60)
                aprovados++;
        }

        printf("Deseja adicionar outra pessoa? (s/n)");
        scanf(" %c", &resposta);

        if (resposta == 'n' || resposta == 'N')
            break;
    }

    percentualGeral = ((float)aprovados / total) * 100;
    percentualM = ((float)aprovadosM / numM) * 100;

    printf("Numero de homens = %d | Numero de mulheres = %d | Percentual de aprovados = %.0f%% | "
    "Percentual de mulheres aprovadas = %.0f%%\n", numH, numM, percentualGeral, percentualM);
    
    return 0;
}
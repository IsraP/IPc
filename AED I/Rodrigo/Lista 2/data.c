# include <stdio.h>
# include <stdlib.h>

int main(void){
    int dia, mes, ano, dia2, mes2, ano2;
    printf("Digite o valor do dia, mes e ano: ");
    scanf("%d %d %d", &dia, &mes, &ano);
    printf("Digite o valor do segundo dia, mes e ano: ");
    scanf("%d %d %d", &dia2, &mes2, &ano2);
    if (ano > ano2){
        printf("A primeira data e maior.\n");
    }
    else if (ano2 > ano){
        printf("A segunda data e maior.\n");
    }
    else{
        if (mes > mes2){
            printf("A primeria data e maior.\n");
        }
        else if (mes2 > mes){
            printf("A segunda data e maior.\n");
        }
        else{
            if (dia > dia2){
                printf("A primeira data e maior.\n");
            }
            else if(dia2 > dia){
                printf("A segunda data e maior.\n");
            }
            else{
                printf("As duas datas sao iguais.\n");
            }
        }
    }
    return 0;
}
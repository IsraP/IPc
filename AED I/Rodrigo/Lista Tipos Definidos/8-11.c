# include <stdio.h>
# include <stdlib.h>

typedef struct dt {
    int dia, mes, ano;
} data;
data *d;
void lerDatas(), calcularDias();

int main(void){
    d = (data *) calloc(2, sizeof(data));

    lerDatas();
    calcularDias();

    free(d);
    return 0;
}

void lerDatas() {
    for (int i = 0; i < 2; i++){
        printf("Digite o dia: ");
        scanf("%d", &d[i].dia);
        printf("Digite o mes: ");
        scanf("%d", &d[i].mes);
        printf("Digite o ano: ");
        scanf("%d", &d[i].ano);
    }    
}

void calcularDias() {
    int aux, dias = 0;
    if (d[1].ano > d[0].ano){
        aux = d[1].ano - d[0].ano;
        dias += aux*365;
    }
    if (d[1].mes > d[0].mes){
        aux = d[1].mes - d[0].mes;
        dias += aux*30;
    }
    else if(d[1].mes < d[0].mes){
            aux = d[0].mes - d[1].mes;
            dias -= aux*30;
    }
    if(d[1].dia > d[0].dia){
        aux = d[1].dia - d[0].dia;
        dias += aux;
    }
    else if(d[1].dia < d[0].dia){
        aux = d[0].dia - d[1].dia;
        dias -= aux;
    }
    
    printf("Dias de dif = %d", dias);
}
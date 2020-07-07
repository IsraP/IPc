# include <stdio.h>
# include <stdlib.h>

typedef struct hms{
    int horas, minutos, segundos;
} time;

time maior = {0, 0, 0}, * horas;

int main(void){
    horas = (time *) calloc(5, sizeof(time));

    for (int i = 0; i < 5; i++){
        printf("Digite a hora: ");
        scanf("%d", &horas[i].horas);
        printf("Digite o minuto: ");
        scanf("%d", &horas[i].minutos);
        printf("Digite o segundo: ");
        scanf("%d", &horas[i].segundos);
    }

    for (int i = 0; i < 5; i++){
        if(horas[i].horas > maior.horas)
            maior = horas[i];
        else if(horas[i].horas == maior.horas){
            if(horas[i].minutos > maior.minutos)
                maior = horas[i];
            else if(horas[i].minutos == maior.minutos){
                if(horas[i].segundos > maior.segundos)
                maior = horas[i];
            }
        }
    }

    for (int i = 0; i < 5; i++){
        printf("%da Hora - %d:%d:%d\n", i, horas[i].horas, horas[i].minutos, horas[i].segundos);
    }

    printf("Maior: %d:%d:%d", maior.horas, maior.minutos, maior.segundos);


    free(horas);
    return 0;
}

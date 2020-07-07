#include <stdio.h>
#include <stdlib.h>

FILE *arq;

int media()
{
    arq = fopen("num.dat", "r");

    float media = 0,
          soma = 0;
    int cont = 0;

    int b;
    fscanf(arq, "%i", &b);
    while (!feof(arq))
    {
        cont++;
        soma = soma + b;
        fscanf(arq, "%i", &b);
    }

    fclose(arq);

    media = soma / cont;

    printf("\nA media dos numeros e: %.2f. \n", media);
}

void verificar(int chave){
    if(arq != NULL){
        arq = fopen("num.dat", "r");

    int verifica = 0;
    int c;

    fscanf(arq, "%i", &c);
    while (!feof(arq))
    {
        if (chave == c)
        {
            verifica++;
        }
        fscanf(arq, "%i", &c);
    }
    fclose(arq);

    printf("\nA cont e: %i", verifica);
    media();
    }
    else{
        printf("Arquivo não encontrado.\n");
    }
    
}

void leNum(int num[]){

    for(int i = 0; i < 5; i++)
    {
        printf("\nDigite o numero desejado: ");
        scanf("%i", &num[i]);

        arq = fopen("num.dat", "a");

        fprintf(arq, "%i\n", num[i]);
        fclose(arq);
    }

    int chave = 0;
    printf("\nDigite o valor da chave: ");
    scanf("%i", &chave);

    verificar(chave); 
}



int main(){
    int num[5],
        chave;

    leNum(num);

}
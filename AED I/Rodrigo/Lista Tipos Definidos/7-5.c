# include <stdio.h>
# include <stdlib.h>
# include <string.h>


typedef struct b{
    char marca[20], modelo[20], chassi[20], renavam[20], cor[20];
    int potencia, portas, capacidade;
} automovel;

automovel * aX;

void readData(automovel *a), printData(automovel *a), sortDataAL(automovel *a), sortDataAM(automovel *a);

int main(void){
    aX = (automovel*) calloc(10, sizeof(automovel));
    readData(aX);
    free(aX);
    return 0;
}

void readData(automovel *a){
    for(int i = 0; i < 10; i++){
        fflush(stdin);
        printf("Digite a marca: ");
        fgets(a[i].marca, 100, stdin);
        printf("Digite o modelo: ");
        fgets(a[i].modelo, 100, stdin);
        printf("Digite o chassi: ");
        fgets(a[i].chassi, 100, stdin);
        printf("Digite o renavam: ");
        fgets(a[i].renavam, 100, stdin);
        printf("Digite a cor: ");
        fgets(a[i].cor, 100, stdin);
        fflush(stdin);
        printf("Digite a potencia: ");
        scanf("%d", &a[i].potencia);
        printf("Digite a qtd de portas: ");
        scanf("%d", &a[i].portas);
        printf("Digite a capacidade: ");
        scanf("%d", &a[i].capacidade);
    }
    sortDataAM(a);
}

void sortDataAM(automovel *a){
    int sort = 0;
    automovel aux;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 9; j++){
            //printf("mod1 = %smod2 = %s", a[j].modelo, a[j+1].modelo);
            if(strcmp(a[j].modelo, a[j+1].modelo) > 0){
                aux = a[j+1];
                a[j+1] = a[j];
                a[j] = aux;
            }
        }
    }
    sortDataAL(a);
}

void sortDataAL(automovel *a){
    printf("eiii");
    int sort = 0;
    automovel aux;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 9; j++){
            //printf("mod1 = %smod2 = %s", a[j].modelo, a[j+1].modelo);
            if(strcmp(a[j].marca, a[j+1].marca) > 0){
                aux = a[j+1];
                a[j+1] = a[j];
                a[j] = aux;
            }
        }
    }
    printData(a);
}

void printData(automovel *a){
    for(int i = 0; i < 10; i++){
        fputs(a[i].marca, stdout);
        fputs(a[i].modelo, stdout);
        fputs(a[i].chassi, stdout);
        fputs(a[i].renavam, stdout);
        fputs(a[i].cor, stdout);
        fflush(stdin);
        printf("%d\n", a[i].potencia);
        printf("%d\n", a[i].portas);
        printf("%d\n", a[i].capacidade);
    }
}

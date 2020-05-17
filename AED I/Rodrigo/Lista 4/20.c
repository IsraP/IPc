# include <stdio.h>

int main(void){
    int vet1[10];
    int vet2[10];
    int vet3[10];
    int soma[10];

    for(int i = 0; i < 10; i++){
        printf("Digite o valor a ser adicionado ao primeiro vetor: ");
        scanf("%d", &vet1[i]);
    }

    for(int i = 0; i < 10; i++){
        printf("Digite o valor a ser adicionado ao segundo vetor: ");
        scanf("%d", &vet2[i]);
    }

    for(int i = 0; i < 10; i++){
        printf("Digite o valor a ser adicionado ao terceiro vetor: ");
        scanf("%d", &vet3[i]);
    }

    for(int i = 0; i < 10; i++){
        soma[i] = vet1[i] + vet2[i] + vet3[i];
    }

    return 0;
}
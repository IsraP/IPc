#include <stdio.h>

void inverteVetorRec();

int main(void){
    int vetor[5] = {1, 2, 3, 4, 5}, tam = 5, pos = 0;
    inverteVetorRec(vetor, tam, pos);
    for(int i = 0; i < tam; i++){
        printf("%d", vetor[i]);
    }
}

void inverteVetorRec(int vetor[], int tam, int pos){
    if (pos < (tam / 2.0)){
        printf("%d", vetor[pos]);
        int temp = vetor[pos];
        vetor[pos] = vetor[tam - 1 - pos];
        vetor[tam - pos - 1] = temp;
        printf("%d", vetor[pos]);
        puts("\n");
        inverteVetorRec(vetor, tam, pos + 1);
    }
}
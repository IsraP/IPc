# include <stdio.h>
# include <stdlib.h>

int * concatenaVetores(), copiaVetor2();
void copiaVetor();

int main(void){
    int v1[5] = {1, 2, 3, 4, 5};
    int v3[5];
    int v2[6] = {6, 7, 8, 9, 10, 11};
    int t1 = sizeof(v1) / 4;
    int t2 = sizeof(v2) / 4;
    concatenaVetores(v1, v2, t1, t2);
    copiaVetor(v1, t1, v2);
    copiaVetor2(v1, t1);
}

int * concatenaVetores(int v1[], int v2[], int t1, int t2){
    int * v3 = (int *) malloc((t1 + t2) * 4);
    for (int i = 0; i < t1; i++){
        *(v3+i) = v1[i];
    }
    for (int i = 0; i < t2; i++){
        *(v3+i+t1) = v2[i];
    }
    for (int i = 0; i < (t1 + t2); i++){
        printf("%d ", v3[i]);
    }
    return v3;
}

void copiaVetor(int v1[], int tam, int v2[]){
    for (int i = 0; i < tam; i++){
        v2[i] = v1[i];
    }
} 

int copiaVetor2(int v1[], int tam){
    int * v2 = (int *) malloc(tam * 4);
    for (int i = 0; i < tam; i++){
        v2[i] = v1[i];
    }
    for (int i = 0; i < tam; i++){
        printf("\n%d ", v2[i]);
    }
    return *v2;
} 
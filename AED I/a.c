# include <stdio.h>





int main(void){
    int TAM = 5;
    int A[5] = {1, 2, 3, 4, 5};
    float aux;
    for(int i=0;i<TAM/2; i++) {
        aux=A[i];
        A[i]=A[TAM-1-i];
        A[TAM-1-i]=aux;
}
    for(int i = 0; i < TAM; i++){
        printf("%d ", A[i]);
    }
}



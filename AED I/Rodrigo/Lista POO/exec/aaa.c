int qtIguais(float A[], float B[], int tamanho){
    int posicao = tamanho-1;

    int quantidade= 0; //caso base

    if(tamanho > 0){  //caso indutivo
        if(A[posicao] == B[posicao])
            quantidade= 1 + qtIguais(A, B, tamanho-1);
        else
            quantidade= qtIguais(A, B, tamanho-1);
    }

    return quantidade;
}

// Recursão indireta
int qtIguais(float A[], float B[]){
    return qtIguais(A, B, TAM);
}
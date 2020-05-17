# include <stdio.h>

int primo(int n){
    if(n == 1)
            return 0;
    for (int i = 1; i < n; i++){
        if(i == 1)
            continue;
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main(void){
    int vetor[10], posicao = 0;
    
    for (int i = 1; i <= 2000 ; i++){
        if (primo(i)){
            vetor[posicao] = i;
            posicao++;
        }
        if (posicao == 10)
            break;
    }

    return 0;
}
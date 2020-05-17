# include <stdio.h>

int fatorial(int n){
    int fatorialN = 1;

    if (n == 0)
        return 0;
    for(int i = 1; i <= n; i++){
        fatorialN = fatorialN * i;
    }
    return fatorialN;
}

int main(void){
    int vetor[10];

    for (int i = 0; i < 10 ; i++){
        vetor[i] = fatorial(i);
    }
    
}
# include <stdio.h>

int primo(int n){
    if(n == 0)
        return 0;
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

int fibonacci(int n){
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    
    int n1 = 0, n2 = 1;
    
    for(int i = 1; i <= n; i++){
        n2 = n2 + n1;
        n1 = n2 - n1;
    }

    return n1;
}

int main(void){
    int vetorFibo[20];
    int copyPrimos[7];
    int posicao = 0;
    
    for (int i = 0; i < 20; i++){
        vetorFibo[i] = fibonacci(i);
    }
    
    for(int i = 0; i < 20; i++){

        if (primo(vetorFibo[i])){
            copyPrimos[posicao] = vetorFibo[i];
            posicao++;
        }

        if(posicao >= 7)
            break;
    }

    for (int i = 0; i < 7 ; i++){
        printf("%d ", copyPrimos[i]);
    }

    return 0;    
}
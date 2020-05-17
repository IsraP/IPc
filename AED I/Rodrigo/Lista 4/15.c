# include <stdio.h>

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
    int vetor[10];

    for (int i = 0; i < 10; i++){
        vetor[i] = fibonacci(i);
    }
    

    return 0;
}
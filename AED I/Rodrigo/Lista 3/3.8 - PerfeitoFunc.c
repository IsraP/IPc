# include <stdio.h>

int perfeito(int n){
    int soma = 0;
    for (int i = 1; i < n; i++){
        if (n % i == 0){
            soma += i;
        }
    }   
    if (soma == n)
        return 1;
    return 0;  
}

int main(void){
    printf("6 : %d\n", perfeito(6));
    printf("7 : %d", perfeito(7));
}
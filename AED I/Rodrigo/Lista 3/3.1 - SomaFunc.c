# include <stdio.h>

int somaentre(int n1, int n2){
    int soma = 0;
    if(n1 < n2){
        for (int i = n1 ; i <= n2 ; i++)
            soma += i;
        
        return soma;
    }

    for(int i = n2 ; i <= n1 ; i++)
        soma += i;
    
    return soma;
    
}

int main(void){
    printf("Soma entre 3 e 6 = %d\n", somaentre(3, 6));
    printf("Soma entre 10 e 7 = %d\n", somaentre(10, 7));
    return 0;

}
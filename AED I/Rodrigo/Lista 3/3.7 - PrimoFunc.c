# include <stdio.h>

int primo(int n){
    for (int i = 2; i < n; i++){
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main(void){
    printf("%d para 31\n", primo(31));
    printf("%d para 20", primo(20));
    return 0;
}
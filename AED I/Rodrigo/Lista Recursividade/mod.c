# include <stdio.h>

int mod();

int main(void){
    int x, y;

    puts("Programa que faz mod.");
    printf("\nDigite o valor do x: ");
    scanf("%d", &x);
    printf("\nDigite o valor do y: ");
    scanf("%d", &y);

    printf("%d", mod(x, y));
}

int mod(int x, int y){
    if(x > y){
        return mod(x - y, y);
    }
    if(x < y){
        return x;
    }

    if(x == y){
        return 0;
    }
}
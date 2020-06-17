# include <stdio.h>

int multip(), multipp(), multi = 1, i = 1;

int main(void){
    int n1, n2;

    puts("Programa para multiplicar recursivamente");

    puts("\nDigite o valor do n1: ");
    scanf("%d", &n1);
    puts("Digite o valor do n2: ");
    scanf("%d", &n2);

    printf("%d", multipp(n1, n2));

    return 0;
}

int multip(int n1, int n2){
    if (n1 > n2){
        return multi;
    }
    else{
        multi *= n1;
        return multip(n1+1, n2);
    }
}

int multipp(int n1, int n2){
    if (i > n2){
        return multi - 1;
    }
    else{
        multi = multi + n1;
        i++;
        return multipp(n1, n2);
    }
}
# include <stdio.h>

int main(void){
    int * pont;
    int x = 4;
    pont = &x;

    printf("%d", *pont);

    return 0;
}
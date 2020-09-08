# include <stdio.h>
# include <stdlib.h>

int main(void){
    int x, y, z;
    printf("Digite o valor do x: ");
    scanf("%d", &x);
    printf("Digite o valor do y: ");
    scanf("%d", &y);
    printf("Digite o valor do z: ");
    scanf("%d", &z);
    if (x % y == 0 && x % z == 0){
        printf("Divisivel por %d e %d\n", y, z);
    }
    else if (x % z == 0){
        printf("Divisivel por %d\n", z);
    }
    else if (x % y == 0){
        printf("Divisivel por %d\n", y);
    }
    return 0;
}
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

typedef union U {
    int x;
    long int y;
} tipoU;

tipoU u1;

int main(void){
    u1.x = 4;
    printf("%d, %d", u1.x, u1.y);
}
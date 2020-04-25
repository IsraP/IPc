# include <stdio.h>
# include <stdlib.h>

 int main(void){
     for (int i = 1; i <= 10; i++){
         printf("Numero = %d | Quadrado = %d | Cubo = %d\n", i, (i * i), (i * i * i));
     }
    return 0;
 }
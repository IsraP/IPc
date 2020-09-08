# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main(){
    double cata, catb, hip;
    printf("Digite o valor do cateto a: ");
    scanf("%lf", &cata);
    printf("Digite o valor do cateto b: ");
    scanf("%lf", &catb);
    hip = pow((cata * cata) + (catb * catb), 0.5);
    printf("O valor da hipotenusa = %lf", hip);
    return 0;
}
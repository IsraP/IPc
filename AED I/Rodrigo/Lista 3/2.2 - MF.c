# include <stdio.h>
# include <stdlib.h>

int main(void){
    char sexo, resposta;
    int idade = 0, numeroM = 0, numeroF = 0, numeroPessoas;
    float altura, peso, mediaP = 0, mediaA = 0, mediaI = 0;

    while(1){
        numeroPessoas++;

        printf("\n\nDigite o seu sexo: ");
        scanf(" %c", &sexo);
        if (sexo == 'm' || sexo == 'M')
            numeroM++;
        else
            numeroF++;
        
        printf("Digite a sua idade: ");
        scanf("%d", &idade);
        mediaI += idade;

        printf("Digite a sua altura: ");
        scanf("%f", &altura);
        mediaA += altura;

        printf("Digite o seu peso: ");
        scanf("%f", &peso);
        mediaP += peso;

        printf("Deseja adicionar mais uma pessoa? (s/n)");
        scanf(" %c", &resposta);

        if (resposta == 'n' || resposta == 'N')
            break;
    }

    mediaP = mediaP / numeroPessoas;
    mediaI = (float)mediaI / numeroPessoas;
    mediaA = mediaA / numeroPessoas;

    printf("Numero de Homens: %d | Numero de Mulheres: %d | Idade media: %.1f | Altura media: %.2f |" 
    "Peso medio: %.1f\n", numeroM, numeroF, mediaI, mediaA, mediaP);

    return 0;

}
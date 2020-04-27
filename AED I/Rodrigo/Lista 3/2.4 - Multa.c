# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>

/* 9 – Faça um programa que leia os dados de diversas multas (idade e sexo do condutor, quantidade de
pontos perdidos na carteira e valor da multa). Calcule e imprima:
a. Idade média dos condutores (ambos os sexos)
b. Valor total de todas as multas
c. Quantidade de pessoas que perderam 7 pontos na carteira
*/

int main(void){
    char sexo, resposta;
    int idade, pontos, setepontos = 0, total = 0;
    float multa, totalmulta = 0, idademed = 0;

    while(1){
        total++;
        printf("Digite seu sexo: (m/f) ");
        scanf(" %c", &sexo);

        printf("Digite sua idade: ");
        scanf("%d", &idade);
        idademed += idade;
        

        printf("Digite quantos pontos voce ganhou: ");
        scanf("%d", &pontos);
        if (pontos == 7)
            setepontos++;
        

        printf("Digite o valor da multa: ");
        scanf("%f", &multa);
        totalmulta += multa;
        

        printf("Deseja adicionar mais uma pessoa? (s/n)");
        scanf(" %c", &resposta);
        resposta = tolower(resposta);
        if (resposta == 'n')
            break;
    }
    
    idademed = (float)idademed / total;
    printf("Idade media = %.0f | Total de multas = %.2f | Total de pessoas com 7 pontos = %d", idademed, 
    totalmulta, setepontos);

    return 0;
}
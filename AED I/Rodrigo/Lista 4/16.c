# include <stdio.h>

float maiorVetor(float *n){
    float maior = 0;
    
    for (int i = 0; i < 10; i++){
        if(*n > maior){
            maior = *n;
        }
            n++;
    }

    return maior;
}

float menorVetor(float *n){
    float menor = 100000000;
    
    for (int i = 0; i < 10; i++){
        if(*n < menor){
            menor = *n;
        }
            n++;
    }

    return menor;
}



int main(void){
    int sexo[10], contadorF = 0;
    float mediaAlturaF = 0, mediaAltura = 0, altura[10];

    // Scan dos valores
    for(int i = 0; i < 10; i++){
        printf("Digite seu sexo: ");
        scanf("%d", &sexo[i]);
        printf("Digite sua altura: ");
        scanf("%f", &altura[i]);
    }

    // Calcular as Médias
    for(int i = 0; i < 10 ; i++){
        mediaAltura += altura[i];
        if(sexo[i] == 2){
            mediaAlturaF += altura[i];
            contadorF += 1;
        }
    }

    mediaAltura = mediaAltura / 10;
    mediaAlturaF = mediaAlturaF / contadorF;

    // Maior e menor
    printf("\nA maior altura da turma = %.2f\n", maiorVetor(altura));
    printf("A menor altura da turma = %.2f\n\n", menorVetor(altura));

    // Calcular as mulheres
    printf("Mulheres com altura acima da media\n\n");
    for(int i = 0; i < 10; i++){
        if(sexo[i] == 2 && altura[i] > mediaAlturaF)
            printf("A mulher de numero %d possui a altura acima de media.\n", i);
        
    }

    // Calcular as pessoas
    printf("\nPessoas abaixo da media de altura\n\n");
    for(int i = 0; i < 10; i++){
        if(altura[i] < mediaAltura)
            printf("A pessoa de numero %d possui altura abaixo da media.\n", i);
    }

    printf("\n");

    return 0;
}
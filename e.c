#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void apresentacaoUm();
int lerValor();
void valorBeK(int *N, int *b, int *k);
void respostaUm(int *b, int *k, int *n);
/** ÍNICIO QUESTÃO II*/
void apresentacaodois();
int Lervalor();
int primoMaior(int *m);

int main()
{
    printf("Lista 13 de exercicios - 28/04/2020");
    int exe;
    printf("\nDigite o numero da questao desejada [1,2]:_");
    scanf("%i",&exe);
    switch (exe)
    {
    case 1:
        {
            apresentacaoUm();
            int n = lerValor();
            int b;
            int k;
            valorBeK(&n,&b,&k);
            respostaUm(&b, &k, &n);
            break;

        }
    case 2:
        {
           apresentacaodois();
           int m = Lervalor();
           int p1,
           p2;
           primoMaior(&m);
           break;

        }

    }
    return 0;
}

void apresentacaoUm()
{
    printf("\n\nCalculo de 'b' e 'k', b^k=N");
}
int lerValor()
{
    int N;
    bool erro;
    do{
        printf("\nDigite o valor de N:_");
        scanf("%i",&N);
        erro=N<=0;
        if (erro)
            printf("\nValor inserido invalido!");
    }while (erro);
    return N;
}
void valorBeK(int *N, int *b, int *k)
{
    int A = *N;
    int base,
    expoente;
    float pot;

    for (base=1; base<=A; base++)
    {
            for (expoente=0; expoente<=A; expoente++)
            {
                pot= pow((float)base,(float)expoente);
                if (pot==A)
                {
                    break;
                }
            }

            if (pot==A)
                {
                    break;
                }
    }
    *b=base;
    *k=expoente;
}
void respostaUm(int *b, int*k, int *n)
{
    printf("\n\nN=%i, b=%i e k=%i\nJah que %i^%i=%i",*n,*b,*k,*b,*k,*n);
}


/** COMEÇA A QUESTÃO 2 ======================================================================================================================= */

void apresentacaodois()
{
    printf("\n\nDescobrir qual o maior primo (p1)e menor primo (p2) entre um valor!");
}
int Lervalor()

{
    int m;
    bool erro;
    do{
        printf("\nDigite um valor inteiro;_");
        scanf("%i",&m);
        erro=m<=0;
        if(erro) printf("\nValor inserido invalido!");
      }while(erro);
    return m;

}
int primoMaior(int *m)
{
    int j;
    int cont=0;

    for(j = *m; j>=0; j--){
        cont=0;
        for(int i = 1; i <=j ; i++){
            if (j % i == 0){
                cont++;
            }
        printf("%d, %d, %d\n", j, i, cont);
        if (cont > 2){
        break;
        }
        }
        
    
    printf("\n\nprimo : %i\n\n",j);
    if (cont == 2){
        break;
        }
    }


}

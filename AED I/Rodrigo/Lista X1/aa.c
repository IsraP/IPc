# include <stdio.h>

const int linha;
int cont = 0;

int tamL();
int tamC();
float leMatriz(float mat[][linha]);
int confere(float mat[][linha]);

int main()
{
    printf("\nPrograma para calcular o numero de valores positivos posicionados acima da diagonal principal de uma matriz quadrada.\n");

    tamL();

    printf("\nDigite a matriz:\n ");
    float matriz[linha][linha];
    leMatriz(matriz);
    confere(matriz);

    if(cont == 0) 
        {
            printf("\nNao tem valores positivos acima da diagonal principal!");
        }
    else if(cont == 1)
        {
            printf("\nExiste 1 valor positivo acima da diagonal principal.");
        }
        else
        {
            printf("\nExistem %i valores positivos acima da diagonal principal.", cont);
        }

}

int tamL()
{
    printf("\nDigite a quantidade de linhas(a quantidade de linhas sera a mesma de colunas): ");
    scanf("%i", &linha);
}

float leMatriz(float mat[][linha])
{
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < linha; j++)
        {
            printf("M[%i][%i]: ", i + 1, j + 1);
            scanf("%f", &mat[i][j]);
        }
    }
}

int confere(float mat[][linha])
{
    int i = 0;

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < linha; j++)
        {
            if (j > i && mat[i][j] > 0)
            {
                cont ++;
            }
        }
    }
}
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int mediaC(int valor[], int c)
{
    int media = 0;
    for (int i = 0; i < c; i++)
    {
        media = valor[i] + media;
    }
    media = media / c;

    return media;
}
int iguais(int valor[], int count, int chave)
{
    int igual = 0;
    for (int i = 0; i < count; i++)
    {
        if (valor[i] == chave)
        {
            igual++;
        }
    }

    return igual;
}
void LeFile(char c[], int count, int chave)
{

    FILE *arq;
    arq = fopen(c, "rb");

    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo!");
        return 1;
    }
    int valor[count];
    for (int i = 0; i < count; i++)
    {
        fscanf(arq, "%i", &valor[i]);
        printf("%i\n", valor[i]);
    }
    int aux = mediaC(valor, c);
    printf("a media dos numeros eh = %i\n", aux);
    mediaC(valor, count);
    iguais(valor, count, chave);
    fclose(arq);
}
void escreveFile(char c[], int chave)
{
    FILE *arq;
    arq = fopen(c, "wb");
    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo!\n");
        return 1;
    }
    int valor = 0;
    int count = 0;
    printf("digite o valor que deseja inserir no arquivo\n");
    printf("para sair digite 0\n");
    do
    {
        scanf("%i", &valor);
        fprintf(arq, "%i,", valor);
        count++;
    } while (valor != 0);
    count--;
    LeFile(c, count, chave);
    fclose(arq);
}
int main()
{
    int chave = 0;
    char c[10];
    printf("digite o nome do arquivo mais .txt\n");
    fflush(stdin);
    scanf("%s", &c);
    printf("nome do arquivo = %s\n", c);
    printf("digite o numero que deseja verificar os iguais:\n");
    scanf("%i", &chave);
    escreveFile(c, chave);

    return 0;
}
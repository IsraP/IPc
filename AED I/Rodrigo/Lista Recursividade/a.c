#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int inverte(char frase[],char inverte[], int tamanho)
{

        char aux;
        strcpy(inverte,frase);
        for(int i=0; i<tamanho/2; i++)
        {
                aux = inverte[i];
                inverte[i] = inverte[tamanho-i-1];
                inverte[tamanho-1-i] = aux;
        }

        printf("\n");
        for(int i=0; i<tamanho; i++)
        {
           printf("%c",frase[i]);
        }

          printf("\n");
        for(int i=0; i<tamanho; i++)
        {
          printf("%c",inverte[i]);
        }



}

int  palindromo(char frase[], char inverte[], int tamanho)
{
        bool ehPalindromo = true;

        int i = 0;
        int g = 1;
        
            printf("%li", strlen(inverte));
        while(i<tamanho-1 && ehPalindromo)
        {
                printf("\n%c %c", frase[i], inverte[g]);
                if(frase[i] == inverte[g])
                {   
                    puts("passei aqui");
                        ehPalindromo = true;
                }
                else
                {
                        ehPalindromo = false;
                }
                i++;
                g++;
        }

        if(ehPalindromo) printf("SIM\n");
        else printf("NAO\n");
        }

int main()
{
        char frase[500];
        char invertido[500];
        bool stop = true;
        while(stop)
        {
                fgets(frase, 500, stdin);
                if (frase[0] == 'F' && frase[1] == 'I' && frase [2] == 'M'){
                        stop = false;
                        break;
                        }
                else{
                        stop = true;
                }
                int tamanho = strlen(frase);
                inverte(frase,invertido,tamanho);
                palindromo(frase, invertido,tamanho);
                
        }
        return 0;
}
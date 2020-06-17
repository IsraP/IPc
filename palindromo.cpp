# include <stdio.h>
# include <string.h>

int ler();
void palindromo(char frase[]);
void reverse(char Str[]);
int comparar(char str1[], char str2[]), comparar2(char str1[], char str2[]);
int booleano = 1;

char RevStr[100];

int main(void){
	while(booleano)
		ler();
}

int ler(){
	char frase[500];

	fgets(frase, 500, stdin);
	if (comparar2(frase, "FIM") == 1){
		booleano = 0;
	}
	else
		palindromo(frase);
}

void palindromo(char frase[]){

	reverse(frase);

	if(comparar(frase, RevStr) == 1)
		printf("SIM\n");
	else
		printf("NAO\n");	

}
void reverse(char Str[]){
	int j = 0;
	int i;
	int len = strlen(Str);
	for (i = len - 1; i >= 0; i--){
		RevStr[j++] = Str[i];
	}
	RevStr[i] = '\0';
}

int comparar(char str1[], char str2[]){
	int seila = strlen(str2);
	for (int i = 0; i < strlen(str1) - 1; i++){
		if (str1[i] != str2[i+1]){
			return 0;
		}
	}
	return 1;
}

int comparar2(char str1[], char str2[]){
	int seila = strlen(str2);
	for (int i = 0; i < strlen(str1) - 1; i++){
		if (str1[i] != str2[i]){
			return 0;
		}
	}
	return 1;
}

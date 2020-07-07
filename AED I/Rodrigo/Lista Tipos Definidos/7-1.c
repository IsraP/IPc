# include <stdio.h>
# include <string.h>

typedef struct a {
    int matricula, ano, semestre;
    char nome[15], curso[30], email[30], telefone[15];
} aluno;
aluno a1, a2, *a3;

int main(void){
    a2.matricula = 693594;
    a2.ano = 2020;
    a2.semestre = 1;
    strcpy(a2.nome, "Israel");
    strcpy(a2.curso, "Ciencia da Computacao");
    strcpy(a2.email, "israelperesol@gmail.com");
    strcpy(a2.telefone, "(31) 99301-1475");

    a1 = a2;
    a3 = &a1;

    printf("Nome: %s, Curso: %s, Matricula: %d, Email: %s, Telefone: %s, Ano de entrada: %d, Semestre de entrada: %do.\n", a1.nome, a1.curso,
    a1.matricula, a1.email, a1.telefone, a1.ano, a1.semestre);
    printf("Nome: %s, Curso: %s, Matricula: %d, Email: %s, Telefone: %s, Ano de entrada: %d, Semestre de entrada: %do.\n", a2.nome, a2.curso,
    a2.matricula, a2.email, a2.telefone, a2.ano, a2.semestre);
    printf("Nome: %s, Curso: %s, Matricula: %d, Email: %s, Telefone: %s, Ano de entrada: %d, Semestre de entrada: %do.\n", (*a3).nome, (*a3).curso,
    (*a3).matricula, (*a3).email, (*a3).telefone, (*a3).ano, (*a3).semestre);

    return 0;
}
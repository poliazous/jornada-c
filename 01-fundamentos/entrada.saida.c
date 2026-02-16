#include <stdio.h>

int main() {
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite o nome do aluno: ");
    scanf("%s", nome);

    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);

    printf("Digite a matricula do aluno: ");
    scanf("%d", &matricula);

    printf("Digite a altura do aluno: ");
    scanf("%f", &altura);

    printf("\nAluno cadastrado com sucesso!\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Matricula: %d\n", matricula);
    printf("Altura: %.2f\n", altura);

}
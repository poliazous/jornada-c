#include <stdio.h>

int main() {
    int idade = 30;
    int quantidade = 10;
    float altura = 1.75;
    double peso = 70.5;
    char letra = 'A';
    char nome[20] = "João Silva";

    // Exibindo os valores das variáveis
    printf("Idade: %d anos\n", idade);
    printf("Quantidade: %d\n", quantidade);
    printf("Altura: %.2f metros\n", altura);
    printf("Peso: %.1f kg\n", peso);
    printf("Letra: %c\n", letra);
    printf("Nome: %s\n", nome);
    
    return 0; //indicar que o programa terminou com sucess

}
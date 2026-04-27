#include <stdio.h>

float notas[3];

void entradaDados() {
    printf("Digite a nota 1: ");
    scanf("%f", &notas[0]);
    printf("Digite a nota 2: ");
    scanf("%f", &notas[1]);
    printf("Digite a nota 3: ");
    scanf("%f", &notas[2]);
}

float calcularMedia() {
    return (notas[0] + notas[1] + notas[2]) / 3;
}

void exibirMedia(float media) {
    printf("\nMedia: %.2f\n", media);
    if (media >= 7) {
        printf("Situacao: APROVADO\n");
    } else {
        printf("Situacao: REPROVADO\n");
    }
}

int main() {
    entradaDados();

    float media = calcularMedia();

    exibirMedia(media);

    return 0;
}
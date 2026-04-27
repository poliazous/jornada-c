#include <stdio.h>

float temperatura[3];

void entradaDados() {
    printf("Digite a temperatura 1: ");
    scanf("%f", &temperatura[0]);
    printf("Digite a temperatura 2: ");
    scanf("%f", &temperatura[1]);
    printf("Digite a temperatura 3: ");
    scanf("%f", &temperatura[2]);
}

float calcularMedia() {
    return (temperatura[0] + temperatura[1] + temperatura[2]) / 3;
}

void exibirMedia(float media) {
    printf("\nMedia: %.2f\n", media);
    if (media >= 28.0) {
        printf("Situacao: REPROVADO\n");
    } else {
        printf("Situacao: APROVADO\n");
    }
}

int main() {
    entradaDados();

    float media = calcularMedia();

    exibirMedia(media);

    return 0;
}
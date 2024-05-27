#include <stdio.h>

int main() {
    int vetor[5], i, diferent = 0, count = 0;

    // Preencher o vetor com valores do usuário
    for (i = 0; i < 5; i++) {
        printf("Digite um valor para o vetor %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Procurar os valores distintos no vetor e imprimir na tela
    for (i = 0; i < 5; i++) {
        if (vetor[i] != vetor[i+1]) {
            diferent = vetor[i];
            count++;

        }
    }

    printf("\nTotal de elementos distintos: %d\n", count);

    return 0;
}



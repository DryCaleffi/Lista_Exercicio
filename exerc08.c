#include <stdio.h>

int main() {
    int t1, t2, i;

    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &t1);
    printf("Digite o tamanho do segundo vetor: ");
    scanf("%d", &t2);
    int vetor1[t1], vetor2[t2];
    // Preencher vetor 1
    for (i = 0; i < t1; i++) {
        printf("Preencha o vetor 1 na posição %d: ", i);
        scanf("%d", &vetor1[i]);
    }
    // Preencher vetor 2
    for (i = 0; i < t2; i++) {
        printf("Preencha o vetor 2 na posição %d: ", i);
        scanf("%d", &vetor2[i]);
    }
    // Concatenação dos vetores
    int total = t1 + t2;
    int vetor3[total];
   // Copiar elementos do vetor1 para vetor3
    for (i = 0; i < t1; i++) {
        vetor3[i] = vetor1[i];
    }
    // Copiar elementos do vetor2 para vetor3
    for (i = 0; i < t2; i++) {
        vetor3[t1 + i] = vetor2[i];
    }

    printf("\nVetor concatenado:\n");
    for (i = 0; i < total; i++) {
        printf("%d ", vetor3[i]);
    }

    return 0;
}

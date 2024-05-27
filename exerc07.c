#include <stdio.h>
//Interseção de Vetores:
//Faça um programa que determina a interseção entre dois vetores, ou seja, os elementos que aparecem em ambos
int main() {
    int t1, t2, i, j, found;
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
        printf("Preencha o vetor 2  na posição %d: ", i);
        scanf("%d", &vetor2[i]);
    }
    int igual[t1];
    found = 0;
    // Determinar a interseção entre os vetores
    for (i = 0; i < t1; i++) {
        for (j = 0; j < t2; j++) {
            if (vetor1[i] == vetor2[j]) {
                igual[found] = vetor1[i];
                found++;
                break;
            }
        }
    }
    // Imprimir os números iguais
    printf("\nOs números iguais são: ");
    for (i = 0; i < found; i++) {
        printf("%d ", igual[i]);
    }
    printf("\n");

    return 0;
}
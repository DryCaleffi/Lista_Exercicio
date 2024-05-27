#include <stdio.h>

void tam(int *alinha, int *acoluna, int *blinha, int *bcoluna) {
    printf("Informe o número de linhas da Matriz A: ");
    printf("\nLinha: ");
    scanf("%d", alinha);
    printf("\nColunas: ");
    scanf("%d", acoluna);
    printf("\nInforme o número de linhas da Matriz B: ");
    printf("\nLinha: ");
    scanf("%d", blinha);
    printf("\nColunas: ");
    scanf("%d", bcoluna);
}

void teste(int alinha, int blinha, int acoluna, int bcoluna, int result[alinha][bcoluna], int A[alinha][acoluna], int B[blinha][bcoluna]) {
    int i, j, k;

    if (acoluna != blinha ) {
        printf("\nA multiplicação das Matrizes não é possível.\n");
        return;
    }

    printf("\nA multiplicação das Matrizes é:\n");

    for (i = 0; i < alinha; i++) {
        for (j = 0; j < bcoluna; j++) {
            result[i][j] = 0;
            for (k = 0; k < acoluna; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int alinha, acoluna, blinha, bcoluna;
    tam(&alinha, &acoluna, &blinha, &bcoluna);

    int A[alinha][acoluna], B[blinha][bcoluna], result[alinha][bcoluna];

    // Preencher matriz A
    printf("Preencha a Matriz A:\n");
    for (int i = 0; i < alinha; i++) {
        for (int j = 0; j < acoluna; j++) {
            printf("Digite o elemento A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Preencher matriz B
    printf("Preencha a Matriz B:\n");
    for (int i = 0; i < blinha; i++) {
        for (int j = 0; j < bcoluna; j++) {
            printf("Digite o elemento B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Multiplicar as matrizes e exibir o resultado
    teste(alinha, blinha, acoluna, bcoluna, result, A, B);

    return 0;
}

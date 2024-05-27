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

void teste(int alinha, int blinha, int acoluna, int bcoluna, int soma[][blinha], int A[][acoluna], int B[][bcoluna]) {
    int i, j;
    if (alinha == blinha && acoluna == bcoluna) {
        for (i = 0; i < alinha; i++) {
            for (j = 0; j < bcoluna; j++) {
                soma[i][j] = A[i][j] + B[i][j];
            }
        }
    } else {
        printf("\nA soma não pode ser realizada, verifique os valores informados. Para a realização da soma, as matrizes devem ser do mesmo tamanho.\n");
        return;
    }
    printf("\nA soma das matrizes é:\n");
    for (i = 0; i < alinha; i++) {
        for (j = 0; j < bcoluna; j++) {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int alinha, acoluna, blinha, bcoluna;
    tam(&alinha, &acoluna, &blinha, &bcoluna);

    int A[alinha][acoluna], B[blinha][bcoluna], soma[alinha][bcoluna];

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

    // Testar e somar as matrizes
    teste(alinha, blinha, acoluna, bcoluna, soma, A, B);

    return 0;
}

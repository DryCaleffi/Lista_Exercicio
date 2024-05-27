#include <stdio.h>
//Matriz transposta
void tran(int linhas, int colunas, float M[linhas][colunas]) {
    float transpo[colunas][linhas];
    int i, j;
    // Calculando a transposta
    for (i = 0; i < colunas; i++) {
        for (j = 0; j < linhas; j++) {
            transpo[i][j] = M[j][i];
        }
    }
    // Exibindo a matriz transposta
    printf("Matriz transposta:\n");
    for (i = 0; i < colunas; i++) {
        for (j = 0; j < linhas; j++) {
            printf("%f\t", transpo[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int linhas, colunas, i, j;
    // Solicitando as dimensões da matriz
    printf("Informe a quantidade de linhas da Matriz:\n");
    scanf("%d", &linhas);
    printf("Informe a quantidade de colunas da Matriz:\n");
    scanf("%d", &colunas);
    float M[linhas][colunas]; // Criando a matriz
    // Preenchendo a matriz
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("Digite o elemento [%d,%d]:\n", i + 1, j + 1);
            scanf("%f", &M[i][j]);
        }
    }

    // Chamando a função para calcular a transposta
    tran(linhas, colunas, M);

    return 0;
}

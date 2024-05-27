// Calculadora de Média: Faça um programa que calcula a média de uma 
//quantidade indefinidade números inseridos pelo usuário. O processo termina quando o usuário digitar um númeronegativo.
#include <stdio.h>
int main() {
    float  media = 0, sum = 0;
    int i, count = 0;
while {1}
        printf("Informe as notas do aluno %d:\n", i+1);
        scanf("%f", &float notas[i]);
        i++ ;   
        if (notas[i] < 0) 
        {
            break;
        }else{
        sum += notas[i];
        count++;
        printf("Informe as notas do aluno %d:\n", i+1);
        scanf("%f", &notas[i]);
        i++ ;   
        }
    
    if (count > 0) {
        media = sum / count;
        printf("A media entre as notas é de :%.2f\n", media);
    } else {
        printf("Nenhuma nota válida foi inserida.\n");
    }

    return 0;
}
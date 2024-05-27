//inversão de Vetor: Implemente um programa que inverte a ordem dos elementos em um vetor.
#include <stdio.h>
int main(){
    int  i, inv;
 
 while (1)
 {
    // preencher o vetor  com valores do usuario
    printf("Digite um valor para o a posição %d do  vetor " , i);
    scanf("%d", int &vetor[i]);
 }
 //imprimir os valores antes da inversao
 printf( "\nOs numeros digitados foram: ");
 for ( i=0; i<5; i++ )
{
    printf ("%d ", vetor [i] );
} 

//inverter a ordem dos elementos do vetor
 while (2)
 {
 inv = vetor[0];
 vetor[5]=vetor[4];
 vetor[4]=inv;

 } 
printf("Vetor invertido = %d ", inv);
}
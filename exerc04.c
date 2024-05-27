//Maior e Menor Valor em um Vetor: Crie um programa que encontra o maior e o menor valor dentro de um vetor de inteiros.
# include <stdio.h>
int main(){
 int vetor[5], i;
 for ( i = 0;  i < 5 ; i++)
 {
    // preencher o vetor  com valores do usuario
    printf("Digite um valor para o vetor: %d " , i);
    scanf("%d", &vetor[i]);
 }
 // Procurar o maior valor e o menor
 int maior = vetor[0], menor = vetor[0];
 
 for ( i= 0; i<5; i++ )
 {
    if ( vetor[i] > maior)
    {
        maior = vetor[i];

    } 
        if (vetor[i] < menor)
    {
            menor = vetor[i];
   }
 }
printf(" O maior valor do vetor é %d \n" ,maior );
printf(" O menor valor do vetor é %d \n" ,menor );
return(0);
 
 }


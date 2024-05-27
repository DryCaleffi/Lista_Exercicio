#include<stdio.h>
#include <math.h>
int main(){
// Verificador de Números Primos: Crie um programa que verifica se um número inserido é primo.
int num, i, resultado  ;
printf("Digite um numero para ser testado se ele e' primo ou nao:\n"); 
scanf("%d" ,&num ); // Ler o valor do usuario
resultado =0; // Inicializar sem trazer sujeira 
for ( i = 2; i <= num /2; i++ )
{ 
    if (num % i == 0 )
    {
      resultado++;
    }
}
 if (resultado == 0)
   { printf("%d é um número primo\n", num);
 }else {
    printf("%d não é um número primo\n", num);
}
 return 0;

}
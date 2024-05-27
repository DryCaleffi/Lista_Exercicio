#include<stdio.h>
// gerador de tabuada 
int main()
{
 int n, i, tab;
 printf("Digite um numero : ");
 scanf("%d" , &n);
 for ( i = 0 ; i<=10 ; i++ ) 
{
    tab = n * i;
    printf("\n %d x %d = %d", n,i,tab);
  
}
}
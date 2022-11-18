#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Faça um programa que obtenha do teclado a quantidade N de valores a serem sorteados entre 0 e 100. Seu programa deve exibir, para cada número sorteado, se ele está dentro ou fora do intervalo [1..15] 
//c)Qual a Soma de todos os números sorteados?

int main(void) {
//Variaveis
int numsort;
int qtde_nums;
  int soma=0;
int contador=0;

  srand(time(NULL));
  
  //Usuario
printf("Quantos números de 0 a 100 você deseja sortear?");
scanf("%d", &qtde_nums);
  
  //Calculos & Resultados
while(qtde_nums>contador) {
  contador=contador+1;
  numsort=rand()%101;
  soma=soma+numsort;
  
if (numsort>0 && numsort<=15) {
  printf("\nO %dº número sorteado é: %d, e está dentro do intervalo (1,15).",contador, numsort);
} else {printf("\nO %dº número sorteado é: %d",contador, numsort);}
} 

  printf("\n\nO valor da soma dos números sorteados é: %d",soma);
  
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

////Faça um programa que obtenha do teclado a quantidade N de valores a serem sorteados entre 0 e 100. Seu programa deve exibir, para cada número sorteado, se ele está dentro ou fora do intervalo [1..15] 
//d) Qual o Valor médio dos números sorteados? ~ Vm=soma dos numeros sort/qtde de nums 

int main(void) {
//Variaveis
  int numsort, qtde_nums;
  int contador=0;
  int soma=0;
  float valor_medio;
  
  srand(time(NULL));
  
  //Usuario
printf("Quantos números de 0 a 100 você deseja sortear?");
  scanf("%d", &qtde_nums);
  
  //Calculos & Resultados
while(qtde_nums>contador) {contador=contador+1;
  numsort=rand()%101;
  soma=soma+numsort;

  if(numsort<=15 && numsort>0){printf("\nO %dº número sorteado é: %d e está no intervalo (1,15)",contador, numsort);} else {printf("\nO %dº número sorteado é: %d",contador, numsort);}
}

  valor_medio=soma/qtde_nums;
  printf("\n\nO valor médio dos números sorteados é: %.1f", valor_medio);
  
    return 0;
}
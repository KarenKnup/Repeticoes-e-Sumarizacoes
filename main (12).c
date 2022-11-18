#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*Faça um programa que obtenha do teclado N valores (inteiros e positivos) e teste quais valores 

estão dentro e quais estão fora do intervalo [1...15], escrevendo o valor e a mensagem correspondente. O valor de N também deve ser lido. */

void SorteiaNum (int qtde) {
   srand(time(NULL));
  
 int numsort, contador=0;

printf("\nOs números sorteados são:\n");
while (contador<qtde) {
  numsort=rand()%101;

  if(numsort>0 && numsort<15) {
      printf("\n%d - DENTRO do intervalo [1..15]",numsort);
  } 
  else {
      printf("\n%d - FORA do intervalo [1..15]",numsort);
  }
  
  contador++;
  }
  
}


int main(void) {
  //Variaveis
int qtde_nums;
  
  //Usuario
printf("\nQuantos números deseja sortear, de 0 a 100?    ");
scanf("%d",&qtde_nums);
  
  //Calculos e Resultados
SorteiaNum(qtde_nums);
  
  return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Faça um programa que obtenha do teclado a quantidade N de valores a serem sorteados entre 0 e 100. 
//a)Seu programa deve exibir, para cada número sorteado, se ele está dentro ou fora do intervalo [1..15] 

int main(void) {
//Variaveis
int numSort, qtdeSorteio;
int contador=0;
  
  //Usuario
  printf("Quantos números você deseja sortear, de 0 a 100?");
  scanf("%d",&qtdeSorteio);
  
  //Calculos&Resultados
srand(time(NULL));

  while (contador<qtdeSorteio){ //A função funcionará enquanto a quantidade no contador for menor que a de nums sorteados
contador=contador+1;
numSort=rand()%101;

    if (numSort>0 && numSort<=15) {
      printf("\nO %dº número é %d, e está no intervalo (0,15)", contador,numSort);
    } else { printf("\nO %dº número é %d", contador,numSort);}
    }
  
    return 0;
}
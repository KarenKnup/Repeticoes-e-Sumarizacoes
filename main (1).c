#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Faça um programa que obtenha do teclado a quantidade N de valores a serem sorteados entre 0 e 100. Seu programa deve exibir, para cada número sorteado, se ele está dentro ou fora do intervalo [1..15] 
//b) Quantos sorteados caíram dentro do intervalo (1...15)
 
int main(void) {
//Variaveis
int numerosort;
  int qtdesort;
 int contador=0;
  int contador_int=0;

  srand(time(NULL));
  
  //Usuario
printf("Quantos números de 0 a 100 você deseja sortear?");
  scanf("%d",&qtdesort);
  
  //Calculos & Resultados
  while (contador<qtdesort){
    contador=contador+1;
numerosort=rand()%101;



    if (numerosort>=1 && numerosort<=15){ 
contador_int=contador_int+1;
      
      printf("\nO %dº número é: %d, e está dentro do intervalo (1,15)",contador,numerosort);
      } else {printf("\nO %dº número é: %d",contador,numerosort);}
    }

  
  printf("\n\nHá %d número(s) no intervalo (1,15)",contador_int);


      return 0;
}
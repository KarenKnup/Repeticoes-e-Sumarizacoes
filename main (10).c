#include <stdio.h>

//Faça um programa que receba para cada uma das n (fornecidos pelo usuário) partidas de uma rodada do campeonato municipal de futebol, o código e o número de gols feitos por um dos times e o código e o número de gols feitos pelo outro time da partida, mostrando, para cada partida, o código do time vencedor ou a mensagem "empate" 

void CalculaPartida (int n){
int cod1,cod2,g1,g2, conta_p=1;

  while (conta_p<=n){
    printf("\n         +++ %dª RODADA +++++\n",conta_p);
    printf("\n----------- 1º TIME -----------");
    printf("\nQual o código do 1º time?   ");
    scanf("%d",&cod1);
    printf("Quantos gols o time %d fez?   ",cod1);
      scanf("%d",&g1);

    printf("\n----------- 2º TIME -----------");
  printf("\nQual o código do 2º time?   ");
    scanf("%d",&cod2);
  printf("Quantos gols o time %d fez?   ",cod1);
      scanf("%d",&g2);

  if(g1>g2){
    printf("\n-------------------------------------------------");
    printf("\n         O time vencedor da %dª rodada é o time %d",conta_p,cod1);
    printf("\n-------------------------------------------------\n");
  } else if(g1==g2) {
    printf("\n-------------------------------------------------");
    printf("\n               EMPATE!");
    printf("\n-------------------------------------------------\n");
  } 
  else{
    printf("\n-------------------------------------------------");
    printf("\n         O time vencedor da %dª rodada é o time %d",conta_p,cod2);
    printf("\n-------------------------------------------------\n");
    }
    conta_p++;
  }
} 


int main(void) {

  //Variaveis
int cod, n_gols, n_partidas;
  
//Usuario
  printf("\nQuantas partidas?   ");
  scanf("%d",&n_partidas);

//Calculos e Resultados
CalculaPartida(n_partidas);
  
  return 0;
}
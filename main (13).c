#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*Faça um programa que mostra a temperatura média de cada dia do mês de março, a partir das temperaturas mínima e máxima de cada dia. As temperaturas devem ser geradas automaticamente com valores entre -10 e +45. 

  Caso a temperatura média seja atípica, (isto é com temperatura média inferior a 15 ou superior 38) deve ser enviado uma mensagem. 

Faça uma função que receba a temperatura média de um dia e retorne 1 se for atípico ou 0 caso contrário. */

//  numsort=rand()%101; ~~~~ entre 0 e 100


int Temp_Atipica (int numsort){
  if(numsort<15 || numsort<38){
      return 1;
  }
      return 0;
}

void SorteiaNum (int qtde) {
   srand(time(NULL));
  
 int numsort, contador=0, x;

printf("\nOs números sorteados são:\n");
while (contador<qtde) {
  numsort=rand()%46-10;

  x=Temp_Atipica(numsort);

  if (x==1) {
      printf("\n%d ºC - temperatura ATÍPICA",numsort);
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
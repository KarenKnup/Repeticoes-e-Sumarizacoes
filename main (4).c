//Qual o Valor médio dos números sorteados fora do intervalo? (1..15)

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
void SorteiaNum (int qtde) {
   srand(time(NULL));
  
 int numsort, contador=0, conta_fora=0, soma_fora=0;

printf("\nOs números sorteados são:");
while (contador<qtde) {
  numsort=rand()%101;
 if (numsort>0 && numsort<=15) {
       printf("\n%d - pertence ao intervalo [1..15]",numsort);
   } 
 else {
      printf("\n%d",numsort);
   conta_fora++;
   soma_fora=soma_fora+numsort;
    }
  contador++;
}

  printf("\n\nO valor médio dos números sorteados FORA do intervalo é %d",soma_fora/conta_fora);
}

int main(void) {
//Variaveis
int qtde_nums;
  
  //Usuario
printf("Quantos números deseja sortear, de 0 a 100?    ");
scanf("%d",&qtde_nums);
  
  //Calculos e Resultados
SorteiaNum(qtde_nums);
  
    return 0;
}
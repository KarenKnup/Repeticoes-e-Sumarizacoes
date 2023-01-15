#include <stdio.h>

/*
A função logarítmica é complementar à potenciação. 
Ou seja, uma vez que 3^4 = 81, podemos então afirmar que log3(81) = 4.

Generalizando, temos que:
base^expoente = pot --> logbase(pot) = expoente

Com base nessa descrição, pede-se o 
desenvolvimento de uma função que, dados a e 
b, calcule o valor de loga(b).

Nota: a sua solução deverá apresentar um valor 
inteiro que, na verdade, será a solução aproximada 
do logaritmo.
  */
  
int potencia (int b, int n){//b elevado a n
  int pot=1, qtde=n, x;

  while(qtde>=0){
    if(qtde==0){
      x=1;
    } else{
      x=b;
    }
    pot=pot*x;
    
    qtde--;
  }

  return pot;
}

int FuncaoLogaritmica (int a, int b){//loga(b)=i -->a^i=b --> valor de i?
  int pot=1;
  
  for(int i=0; i!=b ;i++){
    if(potencia(a,i)==b){
      return i;
    }
  }
  return -1;
}

int main(void) {
  int a,b;

  printf("\nA: ");
  scanf("%d",&a);
    while(a<=0 || a==1){
      printf("\nA deve ser maior que 0 e diferente de 1: ");
       scanf("%d",&a);
    }
  printf("B: ");
  scanf("%d",&b);

  if(FuncaoLogaritmica(a,b)!=-1){
    printf("\n\tlog%d(%d) = %d",a,b,FuncaoLogaritmica(a,b));
  } else {
    printf("\n\tO resultado está em!");
  }
  
  return 0;
}
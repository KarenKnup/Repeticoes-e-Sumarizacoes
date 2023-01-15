#include <stdio.h>

/*
 Fazer uma função que exiba a tabuada de 
potências de um número n, no intervalo de 1 a 
9. 
Para ilustrar, abaixo é apresentada como a 
tabuada de potências de 2 deveria ser exibida:
          2^0 = 1
          2^1 = 2
          2^2 = 4
          2^3 = 8
          2^4 = 16
          2^5 = 32
          2^6 = 64
          2^7 = 128
          2^8 = 256
          2^9 = 512
  */

int potencia(int num, int n){
  int pot=1;
  
  while(n!=0){
    pot=pot*num;

    n--;
  }

  return pot;
}

void TabuadaPot(int n){
  int p=0, pot;

  while(p<=9){
    if(p==0){
      pot=1;
    } else {
      pot=potencia(n,p);
    }
    printf("\n %d^%d = %d",n,p, pot);
    p++;
  }
}

int main(void) {
  int n=2;

  TabuadaPot(n);

  
  return 0;
}
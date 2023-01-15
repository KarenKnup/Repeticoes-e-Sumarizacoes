#include <stdio.h>

/*
 Dados dois números inteiros A e B, fazer uma 
função que determine o número de potências 
de 2 existentes no intervalo definido pelos dois 
valores, assim como a maior delas.
  */

#define TRUE 0
#define FALSE 1
  
int CalculaExpoente (int num){
  int n=2;

  while(num>=n){
    if(n==num){
      return TRUE;
    }
    n=n*2;
  }
  return FALSE;
}

void PotIntervalo (int A, int B){  
  int cont=0, maior=0;
  
  for(int i=A; i<=B; i++){
    if(CalculaExpoente(i)==TRUE){
      if(maior<i){
        maior=i;
      }
      cont++;
    }
  }

  printf("\n\tTem %d números de potência 2 no intervalo [%d,%d]",cont,A,B);
  printf("\n\tO maior número no intervalo [%d,%d] é %d",A,B,maior);
}

int main(void) {
  int A=5, B=18; //8 16 

  PotIntervalo(A,B);
  
  return 0;
}
#include <stdio.h>

/*
Desenvolver uma função que, dado um número 
inteiro N, calcule o valor do seguinte 
somatório:
  */

int fatorial (int n){
  int fat=1;

  for(int i=n; i!=0 ;i--){
    fat=fat*i;
  }
  
  return fat;
}

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

int Calcula (int n){
  int s=1;

  for(int p=1; p<=n-1 ;p++){
    s=s+((potencia(n-p,p))/fatorial(p));
  }

    s=s+1;
  
  return s;
}

int main(void) {
  int N;

  printf("\nN: ");
  scanf("%d",&N);

  printf("\n\tResultado = %d",Calcula(N));
  
  return 0;
}
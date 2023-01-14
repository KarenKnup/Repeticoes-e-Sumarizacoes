#include <stdio.h>

/*
  NÚMERO NACISISTA (SPY NUMBER / ARMSTRONG NUMBER)

Exemplo: 9474 = 9^4 + 4^4 + 7^4 + 4^4
          153 = 1^3 + 5^3 + 3^3
  */

#define TRUE 0
#define FALSE 1

int potencia(int num, int n){
  int pot=1;
  
  while(n!=0){
    pot=pot*num;

    n--;
  }

  return pot;
}

int Verifica (int n){
  int original=n, cont=0, resto;
  float resultado=0.0;

  //Quantos números tem em n
  for (original=n; original!=0; cont++) {
       original/= 10;
   }

  //Armazenar numa variável a soma da potência de cada número individualmente
  for (original=n; original!=0; original/=10) {
       resto = original % 10;
      resultado += potencia(resto, cont);
   }

  //Se o resultado for igual ao número n, é um spy number
  if(resultado==n){
    return TRUE;
  } else {
    return FALSE;
  }

}

int main(void) {
  int n;

  printf("\nDigite um número inteiro: ");
  scanf("%d",&n);
  
  if(Verifica(n)==TRUE){
    printf("\n\tO número %d é um spy number!",n);
  } else {
    printf("\n\tO número %d NÃO é um spy number!",n);
  }
  
  return 0;
}
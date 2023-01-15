#include <stdio.h>

/*
 Fazer uma função leituraDados que permaneça 
lendo valores reais até que o número 0 seja 
digitado. 
Ao final, a função deve determinar a 
quantidade de elementos fornecidos (excluindo 
o 0) e o maior dentre eles.
  */

void leituraDados (){
  int cont=1, n, maior;

printf("Digite um número (0 para parar): ");
scanf("%d",&n);
  maior=n;
  while(n!=0){
    printf("Digite um número (0 para parar): ");
    scanf("%d",&n);
    if(maior<n){
      maior=n;
    }
    cont++;
  }

  printf("\n\t%d elementos foram fornecidos.",cont-1);
  printf("\n\tMaior número fornecido = %d",maior);
}

int main(void) {

  leituraDados();
  
  return 0;
}
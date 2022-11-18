#include <stdio.h>

//Mostrar a tabuada de números informados pelo usuário. A entrada de dados é finalizada quando um número ≤0 for digitado. 

void Tabuada (int num) {
  int contador;
  for (contador=1;contador<=10;contador++){
    printf("\n\t\t\t\t%d x %d = %d",num,contador,contador*num);
    }
}

int main(void) {
int num;

  printf("\nTabuada de qual número? (Digite 0 para terminar.)   ");
  scanf("%d",&num);
  
     while (num!=0){
       Tabuada(num);
       printf("\n\nTabuada de qual número? (Digite 0 para terminar.)   ");
  scanf("%d",&num);
     } 
  
  return 0;
}
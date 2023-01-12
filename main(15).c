#include <stdio.h>

/* 
    TRIÂNGULO DE PASCAL
*/

int main(void) {
  int l, num=1, n, p, espaco;
  
  printf("\nTriângulo de Pascal com quantas linhas? ");
  scanf("%d",&l);
  printf("\n");
  
  for(n=0; n<l; n++){
    for(espaco=1; espaco<=l-n; espaco++){
      printf(" ");
    }
  
    for(p=0; p<=n; p++){
      if (p==0 || n==0){
        num=1;
      } else {
        num=num*(n-p+1)/p;
      }          
    printf("%4d", num);
    }
    
  printf("\n\n");
  }
    
  return 0;
}
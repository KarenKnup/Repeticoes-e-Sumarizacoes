#include <stdio.h>

/* 
    TRIÂNGULO 
*/

int main(void) {
  int l, i, j;

  printf("\nQuantas linhas? ");
  scanf("%d",&l);
  printf("\n\n");

  //Com (*)
   for (i = 1; i <= l; ++i) {//linhas
      for (j = 1; j <= i; ++j) { //colunas
         printf("* ");
      }
      printf("\n");
   }
  printf("\n\n");

  //Com (*) invertida
  for (i = l; i >= 1; --i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
  printf("\n\n");

  //Com números
  for (i = 1; i <= l; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", j);
      }
      printf("\n");
   }
  printf("\n\n");

  //Com números invertida
  for (i = l; i >= 1; --i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", j);
      }
      printf("\n");
   }
  printf("\n\n");

  //Pirâmide de (*)
  int space, k=0;
  
  for (i = 1; i <= l; ++i, k = 0) {
      for (space = 1; space <= l - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
  printf("\n\n");

  //Pirâmide de (*) invertida
  for (i = l; i >= 1; --i) {
      for (space = 0; space < l - i; ++space)
         printf("  ");
      for (j = i; j <= 2 * i - 1; ++j)
         printf("* ");
      for (j = 0; j < i - 1; ++j)
         printf("* ");
      printf("\n");
   }
  printf("\n\n");

  //Pirâmide com números
  int count=0, count1=0;
  
   for (i = 1; i <= l; ++i) {
      for (space = 1; space <= l - i; ++space) {
         printf("  ");
         ++count;
      }
      while (k != 2 * i - 1) {
         if (count <= l - 1) {
            printf("%d ", i + k);
            ++count;
         } else {
            ++count1;
            printf("%d ", (i + k - 2 * count1));
         }
         ++k;
      }
      count1 = count = k = 0;
      printf("\n");
   }
  printf("\n\n");

  //Triângulo de Floyd
  int number=1;
  
  for (i = 1; i <= l; i++) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", number);
         ++number;
      }
      printf("\n");
   }
  printf("\n\n");
  
  //Com letras
  char input, alphabet = 'A';
   printf("Digite uma letra maiúscula para a última linha: ");
   scanf(" %c", &input);
   for (i = 1; i <= (input - 'A' + 1); ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%c ", alphabet);
      }
      ++alphabet;
      printf("\n");
   }
  printf("\n\n");

  
    
  return 0;
}
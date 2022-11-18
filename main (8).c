#include <stdio.h>

/*
Modifique o programa para processar as m (perguntado ao usuário) turmas do professor */

float CalculaLporDia (float p){
  float L_dia;

  return L_dia=(35*(p/1000));
}

int main(void) {
//Variaveis
int n_alunos,t;
float peso_al;
  
//Usuario
  
 //fica fora do loop a comandante - quem dita quantas vezes/quando deve parar
printf("Quantas turmas?   ");
scanf("%d",&t);
  
//Resultados e Cálculos
   int contador_t=0;
  
  while(contador_t<t){
    int contador_alunos=0;
     contador_t++;
        printf("\n\n++++++++++++++++");
  printf("\n    Turma %d",contador_t);
  printf("\n++++++++++++++++");
  printf("\n\nQuantos alunos?");
  scanf("%d",&n_alunos);
    
while(n_alunos>contador_alunos){
   contador_alunos++; 
   printf("\nQual o peso do aluno(a), em kg?   ");
scanf("%f",&peso_al);
  printf("\n____________________________________________________");
 printf("\n\n     O aluno %d deve tomar %.1f litros de água por dia.",contador_alunos,CalculaLporDia(peso_al));
  printf("\n____________________________________________________");
  }
}
    return 0;
}
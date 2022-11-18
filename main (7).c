#include <stdio.h>

/*Um professor, sabendo que a dose diária de água é individual, resolveu calcular a quantidade mínima de litros de água que deve ser ingerida por cada um dos seus n (lido) alunos de uma turma. 

Esta medida é calculada por: 

litros de água/dia = 35ml de água * peso corporal/1000 

Faça um programa que inicialmente obtenha a quantidade de alunos da turma (n). A seguir, para 

cada um dos alunos, obtenha o peso e mostre a quantidade mínima de litros que o aluno deve consumir. 

Modifique o programa para processar as m (perguntado ao usuário) turmas do professor */

float CalculaLporDia (float p){
  float L_dia;

  return L_dia=(35*(p/1000));
}

int main(void) {
//Variaveis
int n_alunos;
float peso_al;
  
//Usuario
printf("Quantos alunos?   "); //fica fora do loop a comandante - quem dita quantas vezes/quando deve parar
scanf("%d",&n_alunos);

  
//Resultados e Cálculos
  int contador_alunos=0;
while(n_alunos>contador_alunos){
  contador_alunos++; 
   printf("\n\nQual o peso do aluno(a), em kg?   ");
scanf("%f",&peso_al);
  printf("\n____________________________________________________");
 printf("\n\n     O aluno %d deve tomar %.1f litros de água por dia.",contador_alunos,CalculaLporDia(peso_al));
  printf("\n____________________________________________________");
  }
    return 0;
}
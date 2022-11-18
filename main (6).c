#include <stdio.h>
//Faça um programa que pergunte a matrícula a nota1 e a nota2 dos alunos de uma turma. Mostre a média aritmética e se o alunos está aprovado ( média>=6) ou não. A entrada de dados é finalizada quando uma matrícula ≤ 0 for digitado. 

float CalcMedia (float n1, float n2){
float m;
  return m=(n1+n2)/2; 
}

int main(void) {
//Variaveis
int mat;
float n1,n2;
  
//Usuario
printf("\nQual a matrícula? (Digite 0 para finalizar.)   ");
scanf("%d",&mat);

//Calculos e Resultados
while (mat>0){
  printf("Qual a primeira nota?   ");
scanf("%f",&n1);
printf("Qual a segunda nota?   ");
scanf("%f",&n2);
  printf("\n__________________________________________________________");
printf("\n\n    A média do(a) aluno(a) %d é: %.1f",mat, CalcMedia(n1,n2));  
  printf("\n__________________________________________________________");
  printf("\n\nQual a matrícula? (Digite 0 para finalizar.   ");
scanf("%d",&mat);
  }
  
    return 0;
}
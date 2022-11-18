#include <stdio.h>

/*
V1- Quantos alunos com nota acima de 7 e quantos alunos com nota abaixo de 3? 
v2 - Qual a média da turma? 
V3 - Qual a menor nota? Quantos alunos com a menor nota? 
V4 - Qual a maior nota? Quantos alunos com a maior nota? */

float CalculaMediaFinal (float nota, float media_trabs) {
float media_final;
  
  return media_final=((0.85*nota)+(0.15*media_trabs)); 

  }


int main(void) {
//Variaveis
int mat, conta_m7=0, conta_m3=0, conta_alunos=0, conta_menor=0, conta_maior=0;
float nota, mediatrabs,mf, soma_medias=0, menor=10, maior=0;

//Usuario
  printf("\nQual a matrícula do aluno? (Insira 0 quando terminar)   ");
  scanf("%d",&mat);
  


//Calculos e Resultados
while (mat!=0){
  printf("Qual a nota da prova do aluno?   ");
  scanf("%f",&nota);
  printf("Qual a média dos trabalhos do aluno?   ");
  scanf("%f",&mediatrabs);
   mf=CalculaMediaFinal(nota,mediatrabs);
  

  if (menor>=mf){
       menor=mf; //O menor número é (menor(10) ou mf? = mf)
     conta_menor++;
  } 
  if (maior<mf){
    maior=mf; 
    conta_maior=1;
  }
  else if (maior ==mf){//Como o maior=0, ele ia contar qualquer numero que passasse 
    conta_maior++;
  }
  
   
  if (mf>7){
    conta_m7++; //conta_m7=conta_m7+1;
  }         //soma+=f --> soma=soma+f 
  else {
    if (mf<3){
      conta_m3++;
    }
  }
  
  conta_alunos++;
 soma_medias+=mf;
 
  printf("\nA média final do aluno %d é %.1f",mat,mf);
printf("\n__________________________________________________________");
  printf("\n\nQual a matrícula do aluno? (Insira 0 quando terminar)   ");
  scanf("%d",&mat);
  
  }
 
  printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
  printf("\n\n%d alunos com a média ACIMA de 7.",conta_m7);
  printf("\n\n%d alunos com a média ABAIXO de 3.",conta_m3);
  printf("\n\nA média da turma é %.1f.",soma_medias/conta_alunos);
   printf("\n\nA menor média da turma é %.1f.",menor);
  printf("\n%d Alunos tiraram a menor nota.",conta_menor);
  printf("\n\nA maior média da turma é %.1f.",maior);
  printf("\n%d Alunos tiraram a maior nota.",conta_maior);
  
    return 0;
}
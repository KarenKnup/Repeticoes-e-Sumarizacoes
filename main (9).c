#include <stdio.h>
#include <math.h>

float CalcSenTerm(float t, float v) {
  int sens;

  return sens=33+((10*sqrt(v))+10.45-v)*((t-33)/22);
}

void Exibe (float sens) {
  printf("\n\nA sensação térmica é de %.1fºC",sens);
}

int main(void) {
//Variaveis
float t,v,s;
int d;
  
//Usuario

printf("\nQuantos dias?   ");
  scanf("%d",&d);
  
 //Calculos e Resultados
  int contador=1;
  while (contador<=d){
    printf("\n      %dº DIA:",contador);
    printf("\nQual a temperatura, em Celsius?   ");
  scanf("%f",&t);
printf("Qual a velocidade do vento a cada hora do dia, em km/h? ");
  scanf("%f",&v);
  s=CalcSenTerm(t,v);
  Exibe(s);
  contador++;
    printf("\n___________________________________________\n");
    }
  
  return 0;
}
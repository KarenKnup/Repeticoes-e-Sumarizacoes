#include <stdio.h>

float CalculaMedia (int d){
float m1, max, min, tm, sm=0;
int contador=0;

      printf("\n____________________________________________\n");
  while (contador<d){
printf("\n%dº dia: Temperatura máxima, em ºC?  ", contador+1);
scanf("%f",&max);
printf("\n%dº dia: Temperatura mínima, em ºC?  ", contador+1);
scanf("%f",&min);
      printf("\n____________________________________________\n");


    m1=(max+min)/2;
    
    sm+=m1;
    contador++;
  }

  tm=sm/d;
  
  return tm;
}

int VerificaM (float m){
if (m>-10 && m<45){
  return 1;
}
  
  return -1;
}

int main(void) {
int d,x;
float m;

  printf("\nQuantos dias?   ");
  scanf("%d",&d);
  
  m=CalculaMedia(d);
  x=VerificaM(m);
    
  printf("\n\nA média de %d dias é %.1f ºC", d, m);
  if (x==1){
    printf("\n      True");
  } else{
    printf("\n      False");
    
  }
  
    return 0;
}
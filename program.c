#include <stdio.h>

float divisione(float n, float d){
  float risDiv;
  risDiv = n/d;
  return risDiv;
}

int main(){
  float risDiv=0;
  int dividendo;
  int divisore;
  printf("Inserisci il dividendo : ");
  scanf("%f", &dividendo);
  printf("Inserisci il divisore : ");
  scanf("%f", &divisore);
  if(d!=0){
    risDiv=divisione(dividendo,divisore);
    printf("Il risultato e' %.2f ", risDiv);
  }else{
    printf("E' impossibile ");
  }
}

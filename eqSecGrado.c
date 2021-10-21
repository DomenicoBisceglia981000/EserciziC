#include <stdio.h>
#include <math.h>
/*
crivete un programma che legga tre coefficienti a,b,c e calcoli le soluzioni (complesse) dell’equazione ax2 +
bx +c. Può essere utile includere il file di intestazione math.h della libreria standard, contenente la funzione
sqrt per il calcolo della radice quadrata. Quando compilate, usate l’opzione -lm
*/
int main(void){
  float a;
  float b;
  float c;
  printf("Inserisci i tre coefficienti dell'equazione di secondo grado che vuoi calcolare : ");
  scanf("%f %f %f", &a, &b, &c);
  float xUno;
  float xDue;
  float delta;
  delta = (b*b) - (4.0 * a * c);
  if (delta >= 0){
    xUno = (-b + sqrt(delta)) / (2 * a);
    xDue = (-b - sqrt(delta)) / (2 * a);
    printf("\nXuno = %f\n", xUno);
    printf("Xdue = %f\n", xDue);
  }else{
    printf("L'equazione non ha soluzioni.");
  }


}

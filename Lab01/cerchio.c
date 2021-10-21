/*
Laboratorio di algoritmi e strutture dati∗
Docente: Violetta Lonati
Primi programmi - esercizi da svolgere in laboratorio
1 Cerchio
Scrivete un programma che legga (in una variabile di tipo float) il raggio di un cerchio e ne stampi l’area.
Tenete presente che il file math.h della libreria standard contiene la definizione della costante M_PI, pari al
valore di π(il rapporto tra la circonferenza ed il diametro). Quando compilate, usate l’opzione -lm.
*/

#include <stdio.h>
#define M_PI // for C
#include <math.h>
int main(void){
  float raggio;
  printf("Inserisci il raggio della circonferenza: ");
  scanf("%f", &raggio);
  //2*pgreco*r
  printf("%f", 2.0*M_PI*raggio);
}

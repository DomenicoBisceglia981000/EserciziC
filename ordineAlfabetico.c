/*
Scrivete un programma che legga due lettere maiuscole e stampi la loro distanza nell’ordine alfabetico. Ad
esempio, su ingresso AC, il programma deve stampare 3, su ingresso FB, il programma deve stampare
5. Ricordate che i caratteri (char) in C sono rappresentati come (piccoli) interi e osservate che, secondo la
codifica ASCII, non c’è soluzione di continuità e non ci sono altri caratteri tra la A e la Z (cosa di cui potete
convincervi con il comando man ascii)
*/

#include <stdio.h>
#include <stdlib.h>
int main(void){
  char prima, seconda;
  int a, b;
  printf("Inserisci due lettere maiuscole: ");
  scanf("%c%c", &prima, &seconda);
  a = prima;
  b = seconda;
  printf("%c e %c distano %d lettere.", prima, seconda, abs(a-b+1));
}

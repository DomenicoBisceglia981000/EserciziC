/*
Scrivete un programma che stampi la sequenza decrescente dei numeri divisori di n, dove n è un numero
inserito in input. Modificate il programma in modo che stampi anche il numero di divisori di n.

*/
#include <stdio.h>

int main(void){
  int numero;
  printf("Inserisci un numero per stampare i suoi divisori in ordine decrescente : ");
  scanf("%d", &numero);
  int div = numero;
  int contatore;
  while(div != 1){
    for (int i = div; i > 0; i--){
      if (i == numero){
        continue;
      }else{
        if (div%i == 0){
          div = div/i;
          contatore++;
          printf("%d\n", i);
        }
      }
    }
  }
  printf("Il numero ha %d divisori", contatore);

}

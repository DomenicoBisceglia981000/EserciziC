/*
Scrivete un altro programma che, usando un ciclo for, stabilisca se un numero n è primo (ovvero ha per
divisori solo 1 e se stesso) oppure no. Cercate di ridurre il numero di istruzioni da eseguire! Scrivete
una nuova versione del programma precedente usando un ciclo while.
*/

#include <stdio.h>
#include <stdbool.h>
int main(void){
  int numeroLetto;
  bool primo = true;
  printf("Inserisci un numero per verificare se è primo : ");
  scanf("%d", &numeroLetto);
  for(int i = 2; i < numeroLetto; i++){
    if (numeroLetto%i == 0){
      primo = false;
      break;
    }
  }


  if (primo == true){
    printf("Il numero che hai inserito è primo!");
  }else{
    printf("Il numero che hai inserito NON è primo!!");
  }
}

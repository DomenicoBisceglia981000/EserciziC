#include <stdio.h>
#include <stdbool.h>

int main(void){
  int numeroLetto;
  printf("Inserisci un numero per scomporlo in fattori primi : ");
  scanf("%d", numeroLetto);
  while (numeroLetto > 1){
    for (int i = 2; i < numeroLetto; i++){
      bool primo = false;
      for (int j = 2; j < i; j++){
        if (i%j == 0){
          break;
        }else{
          primo = true;
        }
      }
      if ((primo == true) && (numeroLetto % i == 0)){
        numeroLetto = numeroLetto/i;
        printf("%d", i);
      }
    }
  }
}

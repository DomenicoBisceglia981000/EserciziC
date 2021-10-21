/*
Scrivete un programma che stampi la sequenza crescente dei primi 10 quadrati perfetti (ossia numeri x tali che
x = y2 per qualche numero naturale y). Usate una macro di valore 10 per rendere il programma più facile da
modificare!
*/

#include <stdio.h>

int main(void){
  for(int i = 1; i <= 10; i ++){
    printf("%d = %d^2\n", i*i, i);
  }
}

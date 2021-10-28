#include <stdio.h>
/*
1.5 Puntatore al minimo
1. Scrivete una funzione con prototipo int *smallest( int a[], int n ) che, dato un array a di lun-
ghezza n, restituisca l’indirizzo dell’elemento più piccolo dell’array.
2. Testate la funzione inserendola in un programma che legga una sequenza di numeri, la memorizzi un un
array a e stampi il valore più piccolo del vettore usando l’istruzione printf( "%d", *smallest( a, n ) ).
*/

int *smallest(int a[], int n){
    int *minore;
    for(int i = 1; i < len(a); i++{
        if (a[i - 1] < a[i]){

        }
    })
}

int main(void){
    char c;
    int sequenzaNumerica[100];
    int i = -1;
    while((c = getchar()) != '\n'){
        if(isdigit(c)){
            i++;
            sequenzaNumerica[i] = c - '0';
        }
    }
    printf("%d", *smallest(sequenzaNumerica, n));
}
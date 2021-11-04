#include <stdio.h>
#include <ctype.h>
/*
1.5 Puntatore al minimo
1. Scrivete una funzione con prototipo int *smallest( int a[], int n ) che, dato un array a di lun-
ghezza n, restituisca l’indirizzo dell’elemento più piccolo dell’array.
2. Testate la funzione inserendola in un programma che legga una sequenza di numeri, la memorizzi un un
array a e stampi il valore più piccolo del vettore usando l’istruzione printf( "%d", *smallest( a, n ) ).
*/

int *smallest(int a[], int n){
    int *minore = &a[0];
    for(int i = 0; i <= n; i++){
        if (a[i] < *minore){
            minore = &a[i];
        }
    }
    return minore;
}

int main(void){
    char c;
    int sequenzaNumerica[100];
    int i = -1;
    while((c = getchar()) != '\n'){
            /*
            printf("\nPROVA DEBUG---------");
            printf("%c\n", c);
            printf("is digit : %d", isdigit(c));
            printf("--------------------\n");
            */
        if(isdigit(c)!=0){
            i++;
            sequenzaNumerica[i] = c - '0';
            /*
            printf("\nPROVA DEBUG INTERI---------");
            printf("%d\n", sequenzaNumerica[i]);
            printf("--------------------\n");
            */
        }
    }
    /*
    for(int j = 0; j < i; j++){
        printf("%d", sequenzaNumerica[j]);
    }
    */
    printf("%d", *smallest(sequenzaNumerica, i));
}
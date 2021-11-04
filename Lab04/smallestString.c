/*
1. Scrivete una funzione con prototipo int smallest_word_index( char *s[], int n ) che, dato un
    array s lungo n di stringhe, restituisca l’indice della parola più piccola (secondo l’ordine alfabetico)
    contenuta nell’array.
    Per effettuare confronti tra stringhe, potete usare la funzione strcmp dal file di intestazione string.h.
2. Definite usando typedef un nuovo tipo String sinonimo di char * e modificate il programma usando
    String ovunque sia opportuno.
3. Partendo dala funzione smallest_word_index scrivete una nuova funzione con prototipo
    String *smallest_word_address( String s[], int n )
    che, dato un array s di n stringhe, restituisca l’indirizzo dell’elemento più piccolo dell’array (sempre
    secondo l’ordine alfabetico).
Suggerimento: riguardate l’esercizio “Puntatore al minimo” e osservate le somiglianze tra i prototipi delle
    funzioni smallest e smallest_word_address.
4. Riscrivete il prototipo della funzione smallest_word_address senza usare il tipo String.
*/


//DA FARE!!!


#include <stdio.h>
#include <string.h>
int smallest_word_index(char *s[], int n){
    
}

typedef struct{
    char *parola[20];
}String;

void main(int argc, char *argv[]){
    String *stringhe[10];
    for(int i = 1; i < argc; i++){
        stringhe[i-1] = argv[i];
        printf("%s", stringhe[i-1]);
    }


    
    

}
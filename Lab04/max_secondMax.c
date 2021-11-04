/*
1. Scrivete una funzione con prototipo
    void max_secondmax ( int a[], int n, int *max, int *second_max )
    che, dato un array a di lunghezza n, individui il valore più grande in a e il secondo elemento per grandezza
    in a, e li memorizzi negli spazi di memoria puntate da max e second_max.
Suggerimento: i parametri max secondmax sono da utilizzare in modo simile ai parametri h, m e s della
    funzione split_time.
2. Testate il vostro programma invocandolo da un main strutturato secondo quanto indicato sopra. Notate che
    gli argomenti passati in corrispondenza di max e secondmax devono essere indirizzi di memoria utili (ad
    esempio indirizzi di variabili dichiarate opportunamente).
3. Rappresentate graficamente lo stato della memoria del programma subito prima dell’invocazione della
    funzione e subito prima del return, riportando in aree diverse dei disegni la porzione di memoria relativa
    alla funzione main e quella relativa alla funzione max_secondmax.

*/


#include <stdio.h>
#include <ctype.h>


void max_secondmax(int a[], int n, int *max, int *second_max){
    for(int i = 0; i < n; i++){
        //devo trovare il maggiore ed il secondo maggiore
        if(a[i] > *max){
            *second_max = *max;
            *max = a[i];
            
        }else if((a[i] > *second_max) && (a[i] != *max)){
            *second_max = a[i];
        }
    }
}

void main(int argc, char *argv[]){
    int len = sizeof(argv[1]);
    //printf("LEN : %d", len);
    int arrayInteri[len];
    
    for(int i = 0; i < len; i++){
        if(isdigit(argv[1][i]) != 0){
            arrayInteri[i] = argv[1][i] - '0';
            //printf("\n%d*/*", arrayInteri[i]);
            //printf("\n//%d//\n", i);
        }

    }
    int max = arrayInteri[0]; 
    int second_max = arrayInteri[1];
    max_secondmax(arrayInteri, len-2, &max, &second_max);
    printf("MAX : %d\nSECOND MAX : %d\n", max, second_max);

}
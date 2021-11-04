/*
1. Scrivete una funzione con prototipo char *maiuscolo( char *stringa ) che trasformi da minuscolo
    in maiuscolo tutte le lettere del suo argomento stringa e ne restituisca un puntatore al primo carattere.
    Potete assumere che stringa sia dato da una stringa terminata da ’\0’ contenente caratteri ASCII (non
    solo lettere). Potete usare la funzione toupper della libreria ctype.h.
2. Testate la funzione inserendola in un programma che legga da standard input una frase terminata da a-capo,
    la memorizzi in una stringa s, invochi la funzione, quindi ristampi la frase tutta in maiuscolo.
3. Come avete dichiarato s? Spiegate perché.
4. Spiegate se c’è differenza, e se sì quale, tra le seguenti dichiarazioni per la funzione maiuscolo:
    char *maiuscolo( char *stringa )
    char *maiuscolo( char stringa[] )
*/
#include <stdio.h>
#include <ctype.h>

char *maiuscolo(char *stringa){
    //int indiceinutile = 1;
    while(*stringa != '\0'){
        //printf("%d", indiceinutile);
        //printf("%d\n", *stringa);
        //printf("%d", indiceinutile);
        if ((isdigit(*stringa)) == 0){
            *stringa = (toupper(*stringa));
            //printf("%c", toupper(*stringa));
        }
        //printf("%d", indiceinutile);
        //indiceinutile++;
        stringa++;
    }
    return stringa;
}

void main(){
    char stringa[100];
    char c;
    int indexStringa = -1;
    printf("Inserisci una stringa : ");
    while((c = getchar()) != '\n'){
        indexStringa++;
        stringa[indexStringa] = c;
    }
    stringa[indexStringa + 1] = '\0';
    maiuscolo(stringa);
    printf("\n%s", stringa);
    
}
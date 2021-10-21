/*
Scrivete un programma che legga una sequenza di caratteri (terminata da un a-capo) e la ristampi identica ma
saltando tutte le occorrenze dell’ultimo carattere. Potete assumere che la sequenza contenga al più 100 caratteri.
Ad esempio, se il programma riceve da standard input il testo
La vispa Teresa avea tra l’erbetta a volo sorpresa gentil farfalletta
l’output deve essere
L visp Teres ve tr l’erbett \ volo sorpres gentil frfllett

*/
#include <stdio.h> 
#include <string.h>

int main (void){
    char c;
    char stringa[100];
    int i = 0;
    while ((c = getchar()) != '\n'){
        stringa[i] = c;
        i++;
    }
    stringa[i] = '\0';
    char stringaModificata[100];
    char letteraIncriminata = stringa[i-1];
    int indice = 0;
    for(int j = 0; j < (strlen(stringa)); j++){
        if (stringa[j] != letteraIncriminata){
            stringaModificata[indice] = stringa[j];
            indice++;
        }
    }
    stringaModificata[indice] = '\0';
    printf("%s\n", stringaModificata);
}

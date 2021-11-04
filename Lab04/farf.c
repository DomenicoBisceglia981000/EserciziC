/*
Quando la vostra docente di laboratorio di algoritmi era bambina, usava a volte, per comunicare con le sue
    amiche, uno speciale alfabeto, detto alfabeto farfallino. L’alfabeto farfallino consiste nel sostituire, a ciascuna
    vocale, una sequenza di tre lettere della forma vocale-f-vocale. Per esempio, alla lettera a viene sostituita la
    sequenza afa, alla lettera e la sequenza efe e così via.
1. Scrivete un programma, di nome farf che, ricevendo come argomento (sulla riga di comando) una parola,
    ne stampi la traduzione in alfabeto farfallino. Potete assumere che la stringa in input non contenga lettere
    maiuscole.
Nota: Il programma deve stampare la parola in alfabeto farfallino, ma non è richiesto che la parola tradotta
    sia memorizzata come stringa.
*/
#include <stdio.h>
void main(int argc, char *argv[]){
    char c;
    int i, indexArgs = 0;
    for(indexArgs = 1; indexArgs < argc; indexArgs++){
        while(*argv[indexArgs] != '\0'){
            switch (*argv[indexArgs]){
                case 'a' : 
                    printf("afa");
                    break;
                case 'e' :
                    printf("efe");
                    break;
                case 'i' : 
                    printf("ifi");
                    break;
                case 'o' : 
                    printf("ofo");
                    break;
                case 'u' :
                    printf("ufu");
                    break;
                default : 
                    printf("%c", *argv[indexArgs]);
                    break;
            }
            argv[indexArgs]++;
        }
        printf("\n");
    }

}
/*
Scrivete una funzione ricorsiva avente due parametri interi b ed e che calcoli la potenza b^e
*/
#include <stdio.h>

int calcolaPotenza(int base, int esponente);

int main(){
    int a, b;
    printf("Inserisci due numeri separati da spazio:\n");
    scanf("%d %d", &a, &b);
    printf("%d\n", calcolaPotenza(a, b));

}

int calcolaPotenza(int base, int esponente){
    if(esponente > 1){
        return base * calcolaPotenza(base, esponente - 1);
    }else{
        return base;
    }
}
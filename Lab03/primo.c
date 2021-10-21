/*Scrivete una funzione con parametro un intero n che stabilisca se n è un numero primo. Scrivete la funzione
partendo dal programma che avete scritto per l’esercizio 5 della scheda “L01-lab”.*/

#include <stdio.h>
#include <stdbool.h>

bool isPrimo(int numero, int indiceDiv);

int main(){
    int numero;
    printf("Inserisci un numero : \n");
    scanf("%d", &numero);
    if (isPrimo(numero, 2)== true){
        printf("%d è un numero primo!", numero);
    }else{
        printf("%d NON è un numero primo!", numero);
    }
}

bool isPrimo(int numero, int indiceDiv){
    if(numero < indiceDiv){
        if ((numero%indiceDiv)==0){
            return false;
        }else{
            return isPrimo(numero, indiceDiv + 1);
        }
    }else{
        return false;
    }
}
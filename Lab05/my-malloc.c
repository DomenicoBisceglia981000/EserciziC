#include <stdlib.h>
#include <stdio.h>

void *my_malloc( size_t n){
    void *p;
    p = malloc (n);
    if (p == NULL){
        printf("error : NULL POINTER!!\n");
        exit(EXIT_FAILURE);
    }
    return p;
}

/*
- l'If controlla che il puntatore p sia nullo, ovvero che non "punti" a niente.
- Indica l'impossibilità di continuo nell'uso del programma, dovuto in questo caso al puntatore nullo.
- Uscire dal programma.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
Scrivere due funzioni che leggano da standard input una sequenza di caratteri e la memorizzino in una stringa di dimensioni opportuna allocata dinamicamente

*/
#define L 2
#define L0 3
char *read_line(char c){
    char *p, l;
    int size = 2, n = 0;
    p = malloc(size);
    while((l = getchar()) != c){
        if(n >= size){
            size *= 2;
            p = realloc(p, size);
        }
        if (l == '\n'){
            p[n] = '\0';
            break;
        }
        p[n++] = l;
    }
    return p;
}

char *read_word(){
    int size = 2, i = 0;
    char *p = malloc(size);
    char c;
    while ((c = getchar()) != EOF){
        if(isalpha(c)==0){
            p[i] = '\0';
            break;
        }
        if(i >= size){
            size *= 2;
            p = realloc(p, size);
        }
        p[i++] = c;
    }
    return p;
}

void main(){
    char c = 'z';
    char *p;
    p = read_word();
    printf("%s\n", p);
}
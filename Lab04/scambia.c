#include <stdio.h>

void scambia(int *p, int *q){
    int c = *p;
    *p = *q;
    *q = c;
}

int main(void){
    int p = 0, q = 0;
    printf("Inserisci due interi separati da spazio : ");
    scanf("%d %d", &p, &q);
    printf("\n---NUMERI PRIMA DELLO SCAMBIO---\np = %d, q = %d\n", p, q);
    scambia(&p, &q);
    printf("\n---NUMERI DOPO LO SCAMBIO---\np = %d, q = %d\n", p, q);

}
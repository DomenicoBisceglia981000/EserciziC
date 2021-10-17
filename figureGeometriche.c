#include<stdio.h>
#include<math.h>

//#define M_PI
typedef struct {
    float x , y;
} Punto ;

typedef struct{
    float raggio;
    Punto centro;
}Cerchio;

typedef struct {
    Punto p1 ;
    Punto p2 ;
} Rettangolo ;

int main ( void ){
    /*
    float b , h , area , duep ;
    Rettangolo r;
    printf ( " RETTANGOLO :\n" );
    printf ( " Inserisci le coordinate del punto in basso a sinistra \n" );
    scanf ( "%f%f" , &r. p1 .x , &r. p1 .y );
    printf ( " Inserisci le coordinate del punto in alto a destra \n" );
    scanf ( "%f%f" , &r. p2 .x , &r. p2 .y );

    b = r. p2 .x - r. p1 .x;
    h = r. p2 .y - r. p1 .y;
    area = b * h;
    duep = 2 * ( b + h );
    printf ( "L ’ area del rettangolo vale %f , il perimetro vale %f\n" , area , duep );
    */
    Cerchio c;
    float area, perimetro;
    printf(" CERCHIO :\n");
    printf(" Inserisci il raggio :\n");
    scanf("%f", &c.raggio);
    printf(" Inserisci le coordinate del centro :\n");
    scanf("%f %f", &c.centro.x, &c.centro.y);
    area = (M_PI * (c.raggio*2))/4;
    perimetro = 2 * M_PI * c.raggio;
    printf("L'area del cerchio vale %f, il perimetro del cerchio vale %f\n", area, perimetro);

    return 0;
}
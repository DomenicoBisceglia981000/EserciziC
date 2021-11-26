/*
Laboratorio di algoritmi e strutture dati
Docente: Violetta Lonati
Registro di prenotazione
L’obiettivo dell’esercizio è scrivere un programma per gestire un registro di prenotazione di posti numerati da 0 a n −1.
Il valore di n (numero dei posti prenotabili) è inserito dall’utente all’atto della creazione del registro. Un cliente è
identificato da una stringa.
Funzionalità da implementare
Il programma deve implementare varie funzionalità. E’ opportuno strutturare il programma in funzioni e commentare
ciascuna funzione indicando chiaramente cosa fa e quali parametri usa.
•newBook (n)
Crea un nuovo registro che permetta la prenotazione di n posti, da 0 a n −1. Se esiste già un registro di
prenotazione, quest’ultimo deve essere cancellato.
•book(k,name)
Se il posto k è libero, prenota il posto k per il cliente identificato da name. Altrimenti, stampa un messaggio di
errore.
•cancel(k)
Se il posto k è occupato, cancella la prenotazione di k. Altrimenti, stampa un messaggio di errore.
•move(f rom,to)
Sposta il cliente dal posto f rom al posto to se ciò è possibile (ossia, f rom è occupato e to libero). Altrimenti,
stampa un messaggio di errore.
•printBook()
Stampa il contenuto del registro (posti prenotati).
*/

typedef struct Register {
   int n;
   char name[10];
}Register;

void printBook(Register r[]){

}

void move(from, to){

}

void cancel(k){

}

void book(k, name){

}


/*
Crea un nuovo registro che permetta la prenotazione di n posti, da 0 a n −1. Se esiste già un registro di
prenotazione, quest’ultimo deve essere cancellato.
*/
void newBook(int n, Register *r, int len){
    if (r[0].name != ""){
        for(int i = 0; i < len; i++){
            r[i].name = "";
            for (int j = 0; j < 10; j++){
                
            }
            r[i].n = 0;
        }
    }

}

void main(){
    Register *r;
}
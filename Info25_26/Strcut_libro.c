/*Registrare le informazioni di alcuni libri:
titolo, autore, anno pubblicazione.
Array di libri
caricare l'array
visualizzare
rimuovere un libro
cercare un libro in base al titolo
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Libro{
    char titolo[20];
    char autore[20];
    int annopub;
}Libro;

void set_libro(Libro *l){
    printf("%s", l->titolo);
    printf("%s", l->autore);
    printf("%d", l->annopub);
}



int main(){}
   
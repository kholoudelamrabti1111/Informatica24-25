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

typedef struct{
    char titolo[20];
    char autore[20];
    int annopub;
}libro;

int main(){
    libro nuovo_libro;
    printf("\nInserisci il titolo del libro:\n ");
    fgets(nuovo_libro.titolo, 20, stdin);
    printf("\nInserisci l'autore del libro:\n ");
    fgets(nuovo_libro.autore, 20, stdin);
    printf("\nInserisci l'anno di pubblicazione del libro:\n ");
    scanf("%d", &nuovo_libro.annopub);
    
    printf("\nDati del libro: %s, %s, %d", nuovo_libro.titolo, nuovo_libro.autore, nuovo_libro.annopub);

    nuovo_libro

}
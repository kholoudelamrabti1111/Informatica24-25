/**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Libro{
    char titolo[50];
    char autore[50];
    int anno;
}Libro;

typedef char* Stringa;

void compatta(Stringa buffer, int lunghezza){
    if(lunghezza >0 && buffer[lunghezza-1]=='\n'){
        buffer[lunghezza-1] = '\0';
        lunghezza--;
    }
}


int main(){
    Libro* libri;
    int n, datato, i_datato, costoso, i_costoso;
    

    libri = (Libro*)malloc(n* sizeof(Libro));
    if(libri==NULL){
        printf("Errore di allocazione");
        return 1;
    }

    //inserimento dati
    strcpy(libri[0].titolo, "Gli scoiattoli mangiano");
    strcpy(libri[0].autore, "Franco Verdi");
    libri[0].anno = 2018;

    strcpy(libri[1].titolo, "I topi si nascondono");
    strcpy(libri[1].autore, "Giulia Rossi");
    libri[1].anno = 1998;

    n+=1;
    libri = (Libro*)realloc(libri, n*sizeof(Libro));
    if(libri== NULL){
        printf("Errore di allocazione");
        return 1;
    }

    strcpy(libri[2].titolo, "I cani ballano");
    strcpy(libri[2].autore, " Jonathan Gialli");
    libri[2].anno = 2016;

        
    //stampa dati
    printf("===Lista Libri===\n");
    for(int i=0; i<n; i++){
        printf("Libro: %d\n", i+1);
        printf("Titolo: %s\n", libri[i].titolo);
        printf("Autore: %s\n", libri[i].autore);
        printf("Anno: %d\n", libri[i].anno);
    }   
    
    datato = libri[0].anno;
    i_datato=0;

    for(int i=0; i<n; i++){
        if(libri[i].anno < datato){
            datato = libri[i].anno;
            i_datato = i;
        }
    }
    printf("Il libro più vecchio è %s",libri[i_datato].titolo);

     for(int i=0; i<n; i++){
        if(libri[i].anno > datato){
            datato = libri[i].anno;
            i_datato = i;
        }
    }
    printf("Il libro più recente è %s", libri[i_datato].titolo);

    printf("Inserisci il titolo del libro da eliminare: ");
    fgets(libri, 50, stdin);
    lunghezza = strlen(libro);
    compatta(libri, lunghezza);

    


}
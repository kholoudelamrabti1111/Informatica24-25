/*Registrare le informazioni di alcuni libri:
titolo, autore, anno e prezzo. Determinare il libro più costoso
e il libro più vecchio
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Libro{
    char titolo[20];
    char autore[20];
    int annopub;
    float prezzo;
}Libro;

typedef char* Stringa;

void compatta(Stringa buffer, int lunghezza){
    if(lunghezza >0 && buffer[lunghezza-1]=='\n'){
        buffer[lunghezza-1] = '\0';
        lunghezza--;
    }
}


int main(){
    Libro *libri;

    int n=3;//allochiamo i primi tre elementi
    int dadato, costoso;//l'anno più vecchio
    int i_datato, i_costoso;//posizione del libro più vecchio
    char libro[40];
    int lunghezza;;

    libri=(Libro*)malloc(n* sizeof(Libro));

    if(libri==NULL){
        printf("Errore di alloczione");
        return 1;
    }

    //inseriamo i dati
    strcpy(libri[0].titolo, "l'amore mio noin muore");
    strcpy(libri[0].autore, "Roberto Saviano");
    libri[0].annopub = 2025;
    libri[0].prezzo = 19.50;

    strcpy(libri[1].titolo, "Maledetti di Dio");
    strcpy(libri[1].autore, "Sven Assel");
    libri[1].annopub = 1953;
    libri[1].prezzo = 13;

    strcpy(libri[2].titolo, "Il diritto di contare");
    strcpy(libri[2].autore, "Margot lee Shetterly");
    libri[2].annopub = 2025;
    libri[2].prezzo = 19.50;

    
    /*aggiungendo un nuovo libro abbiamo dovuto riallocare lo spazio in memoria
     e abbiamo inserito i dati del nuovo libro.
    */
    n+=1;//aumenta numero libri
    libri = (Libro*)realloc(libri, n*sizeof(Libro));//aggiungo un nuovo libro
    
    if(libri==NULL){
        printf("Errore di alloazione");
        return 1;
    }
    strcpy(libri[3].titolo, "Orgolgio e pregiudizio");
    strcpy(libri[3].autore, "Jane Austen");
    libri[3].annopub = 1813;
    libri[3].prezzo = 9;

    printf("===Lista Libri===\n");
    for(int i=0; i<n; i++){
        printf("Libro %d:\n", i+1);
        printf("Titolo %s:\n", libri[i].titolo);
        printf("Autore %s:\n", libri[i].autore);
        printf("Anno: %d:\n", libri[i].annopub);
        printf("Prezzo: %.2f:\n\n", libri[i].prezzo);
    }

    //calcoliamo il libro più vecchio
    dadato = libri[0].annopub;
    i_datato = 0;
    for(int i=1; i<n; i++){
        if(libri[i].annopub < dadato){//se l'anno è minore
            dadato = libri[i].annopub;
            i_datato = i;
        }
    }
    printf("Il libro più datato è : %s\n", libri[i_datato].titolo);
    //calcoliamo il libro più costoso
    costoso = libri[0].prezzo;
    i_costoso = 0;
    for(int i=1; i<n; i++){
        if(libri[i].prezzo > costoso){//se il prezzo è maggiore
            costoso = libri[i].prezzo;
            i_costoso = i;
        }
    }
    printf("Il libro più costoso è : %s\n", libri[i_costoso].titolo);
    //eliminiamo un libro
    printf("inserisici il titolo del libro da eliminare: ");
    fgets(libro, 50, stdin);
    lunghezza = strlen(libro);//calcoliamo la lunghezza della stringa
    compatta(libro, lunghezza);

    //eliminazione del libro
    for(int i=0; i<n; i++){
        if( !(strcmp(libri[i].titolo, libro))){
            for(int j=i; j<(n-1); j++){
                strcpy(libri[j].titolo,libri[j+1].titolo);
                strcpy(libri[j].autore,libri[j+1].autore);
                libri[j].annopub = libri[j+1].annopub;
                libri[j].prezzo = libri[j+1].prezzo;
            }
            n-=1;
        }
    }

    //reallochiamo il nuovo array
    libri = (Libro*)realloc(libri, n*sizeof(Libro));//aggiungo un nuovo libro
    
    if(libri==NULL){
        printf("Errore di alloazione");
        return 1;
    }

    printf("===Lista Libri===\n");
    for(int i=0; i<n; i++){
        printf("Libro %d:\n", i+1);
        printf("Titolo %s:\n", libri[i].titolo);
        printf("Autore %s:\n", libri[i].autore);
        printf("Anno: %d:\n", libri[i].annopub);
        printf("Prezzo: %.2f:\n\n", libri[i].prezzo);
    }    
}
   
/*
CREARE UN PROGRAMMA CHE GESTISCA UNA LIBRERIA DOTATA DI DIVERSI LIBRI TALE DA POTER ESEGUIRE LE SEGUENTI OPERAZONI:
- AGGIUNTA/CREAZIONE DELLA LISTA DI LIBRI;
- RICERCA DI UN LIBRO;
- CANCELLAZIONE DI UN LIBRO;
- MODIFICA DELL'ISBN;
- SEPARARE LA LISTA DEI LIBRI IN DUE LISTE CONTENENTI RISPETTIVAMENTE I LIBRI CREATI PRIMA DEL 2000 E QUELLI DOPO;
TUTTO VIENE GESTITO DA FILE BINARI
typedef struct{
    char autore[30];
    char titolo[30];
    char ISBN[20];
    int anno;
}Libro;
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char autore[30];
    char titolo[30];
    char ISBN[20];
    int anno;
}Libro;

void aggiungiLibro(){
    FILE *fp = fopen("libri.bin", "ab");
    if(fp == NULL){
        printf("Errore di apertura del file!\n");
        return;
    }

    Libro l;
    printf("Inserici autore: ");
    scanf("%[^\n]", l.autore);
    getchar();
    printf("Inserici titolo: ");
    scanf("%[^\n]", l.titolo);
    getchar();
    printf("Inserici ISBN: ");
    scanf("%[^\n]", l.ISBN);
    getchar();
    printf("Inserisci anno:");
    scanf("%d", &l.anno);
    getchar();

    fwrite(&l, sizeof(Libro), 1, fp);
    fclose(fp);

    printf("Libro aggiunto!\n");
}

void visualizzaLibro(){
    FILE *fp = fopen("libri.bin", "rb"); // lettura binaria
    if (fp == NULL) {
        printf("Nessun libro disponibile!\n");
        return;
    }

    Libro l;
    printf("\n--- Libri ---\n");
    while (fread(&l, sizeof(Libro), 1, fp) == 1) {
        printf("Autore: %s, Titolo: %s, ISBN: %s, Anno: %d\n", l.autore, l.titolo, l.ISBN, l.anno);
    }
    fclose(fp);
    printf("---------------\n");
}

void eliminaLibro(){
    FILE *fp = fopen("libri.bin", "rb"); 
    FILE *fpTmp = fopen("tmp.bin", "wb");
    char cerca[30];//nome del libro da cercare
    Libro l;//variabile per leggere i libri

    if (fp == NULL) {
        printf("Nessun libro disponibile!\n");
        return;
    }
    if (fpTmp == NULL) {
        printf("Errore sul file temporaneo!\n");
        return;
    }

    printf("Inserisci il nome del libro da eliminare: ");
    scanf("%[^\n]", cerca);
    getchar();

    while(fread(&l, sizeof(Libro), 1, fp)){
        if(strcmp(l.titolo,cerca)==0){
            printf("Trovato!..l'elemento sarà eliminato\n");
        }else{
            fwrite(&l, sizeof(Libro), 1, fpTmp);
        }
    }
    fclose(fp);
    fclose(fpTmp);

    fp = fopen("tmp.bin", "rb"); 
    fpTmp = fopen("libri.bin", "wb");
    if (fp == NULL) {
        printf("Errore di lettura!\n");
        return;
    }
    if (fpTmp == NULL) {
        printf("Errore sul file temporaneo!\n");
        return;
    }
    
    while(fread(&l, sizeof(Libro), 1, fp))//
        fwrite(&l, sizeof(Libro), 1, fpTmp);
    
    fclose(fp);
    fclose(fpTmp);
}

void ricercaLibro(const char *filename, const char *titolo){
    FILE *fp = fopen(filename, "rb");
    Libro l;
    int trovato=0;

    if (fp == NULL) {
        printf("Nessun libro disponibile!\n");
        return;
    }
    while(fread(&l, sizeof(Libro), 1, fp)==1 && !trovato){
        if(strcmp(l.titolo, titolo) == 0){
            printf("\nTrovato Autore: %s - Titolo: %s - ISBN: %s - Anno: %d", l.autore, l.titolo, l.ISBN, l.anno);
            trovato = 1;
        }
    }
    if(!trovato)
        printf("\nLibro non trovato.");

    fclose(fp);
}

void modificaLibro(const char *filename, const char *titolo, const char* isbn){
    FILE *fp = fopen(filename, "rb+");
    Libro l;

    if (fp == NULL) {
        printf("Nessun libro disponibile!\n");
        return;
    }
    while(fread(&l, sizeof(Libro), 1, fp)==1){
        if(strcmp(l.ISBN, isbn) == 0){
            l.anno = 2000;

            fseek(fp, -sizeof(Libro), SEEK_CUR);

            fwrite(&l, sizeof(Libro), 1, fp);
        }
    }
    fclose(fp);
}

void separaLibro(){
    FILE *fp = fopen("libri.bin", "rb");
    FILE *fpVecchi = fopen("Vecchi.bin", "ab");
    FILE *fpNuovi = fopen("Nuovi.bin", "ab");
    Libro l;
    
    if (fp == NULL) {
        printf("Rubrica vuota!\n");
        return;
    }

    if (fpVecchi == NULL) {
        printf("Errore apertura file femmine!\n");
        return;
    }

    if (fpNuovi == NULL) {
        printf("Errore apertura file maschi!\n");
        return;
    }

    while(fread(&l, sizeof(Libro), 1, fp)){
        if(l.anno < 2000){
            fwrite(&l, sizeof(Libro), 1, fpVecchi);
        }else{
            fwrite(&l, sizeof(Libro), 1, fpNuovi);
        }
    }

    fclose(fp);
    fclose(fpVecchi);
    fclose(fpNuovi);
    
    fpVecchi = fopen("Vecchi.bin", "ab");
    fpNuovi = fopen("Nuovi.bin", "ab");
    
    printf("\n-----Rubrica Vecchi-----\n");
    while(fread(&l, sizeof(Libro), 1, fpVecchi)){
        printf("Titolo: %s,  Autore: %s, ISBN: %s,  Anno: %d\n", l.titolo, l.autore, l.ISBN, l.anno);
    }

    printf("\n-----Rubrica Nuovi------\n");
    while(fread(&l, sizeof(Libro), 1, fpNuovi)){
        printf("Titolo: %s,  Autore: %s, ISBN: %s,  Anno: %d\n", l.titolo, l.autore, l.ISBN, l.anno);
    }

    fclose(fpVecchi);
    fclose(fpNuovi);

}

int main(){
    int scelta;

    do {
        printf("\nMenu Libri:\n");
        printf("1. Aggiungi Libro\n");
        printf("2. Visualizza Libro\n");
        printf("3. Elimina Libro\n");
        printf("4. Separa i libri in base all'anno\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);
        getchar();

        switch(scelta) {
            case 1:
                aggiungiLibro();
                break;
            case 2:
                visualizzaLibro();
                break;
            case 3:
                eliminaLibro();
                break;
             case 4:
                separaLibro();
                break;
            case 0:
                printf("Uscita dal programma.\n");
                break;
            default:
                printf("Scelta non valida!\n");
        }
    } while(scelta != 0);

    return 0;
}

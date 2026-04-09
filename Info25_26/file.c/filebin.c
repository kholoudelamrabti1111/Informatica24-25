/*Creare una rubrica che gestica la memorizzazione
dei contatti e ne visualizzi l'elenco
*/

#include <stdio.h>
typedef struct{
    char nome[30];
    char telefono[15];
}Contatto;

void aggiungiContatto(){
    FILE *fp = fopen("rubrica.bin", "ab");

    if(fp == NULL){
        printf("Errore apertura file\n");
        return;
    }
    Contatto c;
    printf("Inserisci il nome: ");
    scanf("%[^\n]", c.nome);
    getchar();
    printf("Inserisci il numero di telefono: ");
    scanf("%[^\n]", c.telefono);
    getchar();
    fwrite(&c, sizeof(Contatto), 1, fp);
    fclose(fp);
}

void stampaContatti(){
    FILE *fp = fopen("rubrica.bin", "rb");

    if(fp == NULL){
        printf("Errore apertura file\n");
        return;
    }
    Contatto c;
    printf("\n ---RUBRICA--- \n");
    while(fread(&c, sizeof(Contatto), 1, fp)){
        printf("Nome: %s, Telefono %s\n", c.nome, c.telefono);
    }
    fclose(fp);
}

int main(){
    int scelta;

    do{
        printf("\nMenu rubrica: \n");
        printf("1. Aggiungi contatto\n");
        printf("2. Visualizza contatti\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);
        getchar();
        switch(scelta){
            case 1:
                aggiungiContatto();
                break;
            case 2: 
                stampaContatti();
                break;
            case 0:
                printf("Esci dal programma\n");
                break;
            deafult: 
                printf("Scelta non valida\n");
        }

    }while(scelta != 0);
}
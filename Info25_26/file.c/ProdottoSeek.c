/*CREATA UNA STRUCT PRODOTTO CON NOME, ID E PREZZO
SCRIVERE SU FILE BINARIO UNA SERIE DI PRODOTTI.
MODIFICARE IL PREZZO DI UN PRODOTTO DATO IL SUO ID
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int id;
    char nome[50];
    float prezzo;
}Prodotto;

void InserisciProdotto(const char *filename){
    FILE *fp = fopen(filename, "ab");//append in binario
    int n;
    Prodotto p;

    if(fp == NULL){//controllo apertura file
        printf("Errrore di apertura file\n");
        return;
    }
    printf("Quanti prodotti vuoi inserire?");
    scanf("%d", &n);
    getchar();

    for(int i=0; i<n; i++){//inserimenti dati prodotto
        printf("Prodotto %d\n", i+1);
        printf("ID: ");
        scanf("%d", &p.id);
        printf("NOME: ");
        scanf("%[^\n]", p.nome);
        printf("PREZZO: ");
        scanf("%f", &p.prezzo);

        fwrite(&p, sizeof(Prodotto), 1, fp);//scrivo su file
    }
    fclose(fp);
}


 void StampaProdotto(const char *filename){
    FILE *fp = fopen(filename, "rb");//lettura in binario
    Prodotto p;

    if(fp == NULL){//controllo apertura file
        printf("Errrore di apertura file\n");
        return;
    }

    printf("ELENCO PRODOTTI:\n");
    while(fread(&p, sizeof(Prodotto), 1, fp) == 1){//leggo da file
        printf("ID: %d, NOME: %s, PREZZO: %.2f\n", p.id, p.nome, p.prezzo);//stampo
    }
    fclose(fp);
 }

 void cercaProdotto(const char *filename, int _id){
    FILE *fp = fopen(filename, "rb");//lettura in binario
    Prodotto p;
    int trovato=0;

    if(fp == NULL){//controllo apertura file
        printf("Errrore di apertura file\n");
        return;
    }
     while(fread(&p, sizeof(Prodotto), 1, fp) == 1 && !trovato){
        if(p.id == _id){
           printf("\nTrovato None: %s - Prezzp: %f, p.nome, p.prezzo");
            trovato = 1;
        }
    }
    if(!trovato)
        printf("Prodotto non trovato\n");
    fclose(fp);
}

void modificaProdotto(const char *filename, int _id, float nP){//modifica prezzo prodotto dato l'id
     FILE *fp = fopen(filename, "rb");//lettura in binario
    Prodotto p;
    int trovato=0;

    if(fp == NULL){//controllo apertura file
        printf("Rubrica vuota\n");
        return;
    }
        while(fread(&p, sizeof(Prodotto), 1, fp)== 1){
            if(p.id == _id){//se trovo il prodotto con l'id
                p.prezzo = nP;//modifico il prezzo

                fseek(fp, -sizeof(Prodotto), SEEK_CUR);//torno indietro di un prodotto

                fwrite(&p, sizeof(Prodotto), 1, fp);//sovrascrivo il prodotto modificato
            }
        }
    }fclose(fp);
    


int main() {
    const char *file = "prodotti.dat";    
    int scelta, id;
    float nuovoPrezzo;

    do {
        printf("\nMenu Prodotti:\n");
        printf("1. Aggiungi prodotto\n");
        printf("2. Visualizza elenco prodotti\n");
        printf("3. Modifica prezzo prodotto\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);
        getchar();

        switch(scelta) {
            case 1:
                InserisciProdotto(file);
                break;
            case 2:
                StampaProdotto(file);
                break;
            case 3:
                printf("\nInserisci l'ID del prodotto");
                scanf("%d", &id);
                getchar();
                cercaProdotto(file, id);
                printf("Inserisci il nuovo prezzo: ");
                scanf("%f", &nuovoPrezzo);
                getchar();
                modificaProdotto(file, id, nuovoPrezzo);                
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
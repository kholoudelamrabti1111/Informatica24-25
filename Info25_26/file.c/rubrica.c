/* Creare una rubrica telefonica utilizzando un file binario
Aggiungere o creare il file rubrica
stampa lista contatti
elimina un contatto in base al nome
separa il file rubrica in due file in base al sesso
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[30];
    char telefono[15];
    char sesso;
} Contatto;

void aggiungiContatto() {
    FILE *fp = fopen("rubrica.bin", "ab"); // append in binario
    if (fp == NULL) {
        printf("Errore apertura file!\n");
        return;
    }

    Contatto c;
    printf("Inserisci nome: ");
    scanf(" %[^\n]", c.nome);
    getchar();
    printf("Inserisci telefono: ");
    scanf(" %[^\n]", c.telefono);
    getchar();
    printf("Inserisci il sesso: ");
    scanf(" %c", &c.sesso);
    getchar();


    fwrite(&c, sizeof(Contatto), 1, fp);
    fclose(fp);

    printf("Contatto aggiunto!\n");
}

void visualizzaRubrica() {
    FILE *fp = fopen("rubrica.bin", "rb"); // lettura binaria
    if (fp == NULL) {
        printf("Rubrica vuota!\n");
        return;
    }

    Contatto c;
    printf("\n--- Rubrica ---\n");
    while (fread(&c, sizeof(Contatto), 1, fp) == 1) {
        printf("Nome: %s, Telefono: %s, Sesso : %c\n", c.nome, c.telefono, c.sesso);
    }
    fclose(fp);
    printf("---------------\n");
}

void eliminaContatto(){
    FILE *fp = fopen("rubrica.bin", "rb"); 
    FILE *fpTmp = fopen("tmp.bin", "wb");
    char cerca[30];//nome del contatto da cercare
    Contatto c;//variabile per leggere i contatti

    if (fp == NULL) {
        printf("Rubrica vuota!\n");
        return;
    }
    if (fpTmp == NULL) {
        printf("Errore sul file temporaneo!\n");
        return;
    }

    printf("Inserisci il nome del contatto da eliminare: ");
    scanf("%[^\n]", cerca);
    getchar();

    while(fread(&c, sizeof(Contatto), 1, fp)){
        if(strcmp(c.nome,cerca)==0){
            printf("Trovato!..l'elemento sarà eliminato\n");
        }else{
            fwrite(&c, sizeof(Contatto), 1, fpTmp);
        }
    }
    fclose(fp);
    fclose(fpTmp);

    fp = fopen("tmp.bin", "rb"); 
    fpTmp = fopen("rubrica.bin", "wb");
    if (fp == NULL) {
        printf("Errore di lettura!\n");
        return;
    }
    if (fpTmp == NULL) {
        printf("Errore sul file temporaneo!\n");
        return;
    }
    
    while(fread(&c, sizeof(Contatto), 1, fp))//
        fwrite(&c, sizeof(Contatto), 1, fpTmp);
    
    fclose(fp);
    fclose(fpTmp);
}

void separaContatti(){
    FILE *fp = fopen("rubrica.bin", "rb");
    FILE *fpF = fopen("femmine.bin", "ab");
    FILE *fpM = fopen("maschi.bin", "ab");
    Contatto c;
    
    if (fp == NULL) {
        printf("Rubrica vuota!\n");
        return;
    }

    if (fpF == NULL) {
        printf("Errore apertura file femmine!\n");
        return;
    }

    if (fpM == NULL) {
        printf("Errore apertura file maschi!\n");
        return;
    }

    while(fread(&c, sizeof(Contatto), 1, fp)){
        if(c.sesso == 'f' || c.sesso == 'F'){
            fwrite(&c, sizeof(Contatto), 1, fpF);
        }else if(c.sesso == 'm' || c.sesso == 'M')
            fwrite(&c, sizeof(Contatto), 1, fpM);
    }

    fclose(fp);
    fclose(fpF);
    fclose(fpM);
    
    fpF = fopen("femmine.bin", "ab");
    fpM = fopen("maschi.bin", "ab");
    
    printf("\n-----Rubrica Femmine-----\n");
    while(fread(&c, sizeof(Contatto), 1, fpF)){
        printf("Nome: %s, Telefono: %s, Sesso: %c\n", c.nome, c.telefono, c.sesso);
    }

    printf("\n-----Rubrica Maschi------\n");
    while(fread(&c, sizeof(Contatto), 1, fpM)){
        printf("Nome: %s, Telefono: %s, Sesso: %c\n", c.nome, c.telefono, c.sesso);
    }

    fclose(fpF);
    fclose(fpM);

}

int main() {
    int scelta;

    do {
        printf("\nMenu Rubrica:\n");
        printf("1. Aggiungi contatto\n");
        printf("2. Visualizza rubrica\n");
        printf("3. Elimina contatto\n");
        printf("4. Separa i contatti in base al sesso\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);
        getchar();

        switch(scelta) {
            case 1:
                aggiungiContatto();
                break;
            case 2:
                visualizzaRubrica();
                break;
            case 3:
                eliminaContatto();
                break;
             case 4:
                separaContatti();
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
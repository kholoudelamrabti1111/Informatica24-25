/*Classe di studenti:
Cognome, Nome, matriola.
Per ogni studente dotato di matricola abbiamo
le informazioi riguardante gli esami e il livllo raggiunto.
1) ricercare lo studente con più certificazioni.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char cognome[20];
    char nome[20];
    char classe[3];
    int matricola;//1000 - 9999
}studente;

typedef struct {
    int matricola;
    struct esame{
        char corso[20];
        int livello;//(1-3)
    };
}certificazioni;

int main(){
    struct studente *alunno;

    *alunno = (strcut *studente)malloc(sizeof(struct studente));
    if(alunno == NULL){
        printf("Errore");
        exit(1);
    }
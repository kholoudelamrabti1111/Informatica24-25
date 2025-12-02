/*Creare una struct Squadra contenente le seguenti informazioni:nome, colore, punteggio
e le informazioni del proprio allenatore(nome, cognome, titoli)
Caricato un massimo di 10 squadre stampare quelle con un punteggio superiore a 100.
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char nome[20];
    char colore[20];
    int punteggio;
}squadra;

/*
typedef struct squadra{
    char nome[20];
    char colore[20];
    int punteggio;
    struct allenatore{
    char nome[20];
    char cognome[20];
    int titoli;
    }mister
}
*/

void stampa(squadra *team, int n){
    for(int i=0; i<n; i++){
        printf("Nome squadra: %s\n", team[i].nome);
        printf("Colore squadra: %s\n", team[i].colore);
        printf("Punteggi: %d\n", team[i].punteggio);
    }
}

int main(){
    squadra *team;
    int n;

    do{
        printf("Inserisci il numero delle squadre(max10): ");
        scanf("%d", &n);
    }while(n<0 || n>10);

    team = (squadra*)malloc(sizeof(squadra)); 
    if(team==NULL){
        printf("Errore di allocazione");
        return 1;
    }

    for(int i=0; i<n; i++){
        printf("Inserisci il nome della squadra: ");
        scanf("%s", team[i].nome);
        printf("Inserisci il colore della squadra: ");
        scanf("%s", team[i].colore);
        fflush(stdin);
        printf("Inserisci il punteggio della squadra: ");
        scanf("%d", &(team[i].punteggio));
        fflush(stdin);
    }
    stampa(team, n);
}


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


typedef struct squadra{
    char nome[20];
    char colore[20];
    int punteggio;
    struct allenatore{
        char nome[20];
        char cognome[20];
        int titoli[10];
    }mister;
};


void stampa(squadra *team, int n){
    for(int i=0; i<n; i++){
        printf("Nome squadra: %s\n", team[i].nome);
        printf("Colore squadra: %s\n", team[i].colore);
        printf("Punteggi: %d\n", team[i].punteggio);
        printf("Nome allenatore: %s\n", squadre[i].nome);
        printf("Cognome allenatore: %s\n", squadre[i].cognome);
        printf("Titoli allenatore: %d\n", squadre[i].titoli);
    }
}

int main(){
    squadra *team;
    int n;
    squadra *squadre;

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
        printf("Inserisci il nome dell'allenatore: ");
        scanf("%s", squadre[i].nome);
        fflush(stdin);
        printf("Inserisci il cognome dell'allenatore: ");
        scanf("%s", squadre[i].cognome);
        fflush(stdin);
        printf("Inserisci i titoli dell'allenatore: ");
        scanf("%d", &(squadre[i].titoli));
        fflush(stdin);
    }
    stampa(team, n, squadre);
}


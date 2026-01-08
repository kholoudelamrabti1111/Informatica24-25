/*Partendo dal codice iniziato in classe (vedi link in alto nella pagina), scrivere un programma in C che simuli una versione molto semplificata di Spotify. Il programma deve gestire:
Una lista lineare di canzoni disponibili
Una playlist che funziona come lista circolare

Ogni canzone è memorizzata tramite una struttura che contiene:
titolo (stringa)
artista (stringa)
durata in secondi (int)
id univoco (assegnato automaticamente; ogni nuova canzone incrementa l’ID)
puntatore alla canzone successiva.

void stampa_canzone(Canzone *c)
 Stampa a video tutti i campi della canzone.
void set_canzone(Canzone *c)
 Chiede all’utente i dati della canzone (tranne l’ID, che viene generato dal programma).
Lista* crea_lista()
 Crea e inizializza una lista lineare vuota di canzoni.
void stampa_lista(Lista *l)
 Stampa tutti gli elementi della lista delle canzoni disponibili.
void inserisci_canzone_lista(Lista *l)
 Crea una nuova canzone tramite set_canzone() e la inserisce in testa alla lista.
void ricerca_canzone_artista(Lista *l, char* artista)
 Cerca e stampa tutte le canzoni dell’artista indicato.
void libera_memoria(Lista* l)
 Libera correttamente la memoria di tutte le canzoni nella lista.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Canzone {
    int id;
    char titolo[50];
    char artista[50];
    int durata;
    struct Canzone* next;
    int dato;
} Canzone;

typedef struct Lista {
    Canzone* testa;
    int lunghezza;
} Lista;



int id_univoco = 0;

//Chiede all’utente i dati della canzone (tranne l’ID, che viene generato dal programma).
void set_Canzone(Canzone *c){
    printf(" Inserisci la canzone\n");
    fgets(c->titolo, 20, stdin);
    printf("Inserisci l'artista della canzone:\n ");
    fgets(c->artista, 20, stdin);
    printf("Inserisci la durata della canzone:\n ");
    scanf("%d", &c->durata);
    getchar();
}

//Stampa a video tutti i campi della canzone.
void stampa_Canzone(Canzone *c, int n){
    printf("Stampa lista canzoni\n");
    for(int i=0;i<n;i++){
        printf("titolo %s", c[i].titolo);
        printf("artista %s", c[i].artista);
        printf("durata %d", c[i].durata);
        printf("id %d", c[i].id);
    }
}

//Crea e inizializza una lista lineare vuota di canzoni.
Lista* crea_lista(){
    Lista *c=(Lista*)malloc(sizeof(Lista));
    c->lunghezza=0;
    c->testa=NULL;
    return c;
}

// Stampa tutti gli elementi della lista delle canzoni disponibili.
void stampa_lista(Lista *l){
    Canzone* current = l->testa;
    
    printf("Lista: ");
    while (current != NULL) {
        printf("%d -> ", current->dato);
        current = current->next;
    }
    printf("FINE LISTA\n");
    printf("Lunghezza: %d\n", l->lunghezza);
}

// Crea una nuova canzone tramite set_canzone() e la inserisce in testa alla lista.
void inserisci_canzone_lista(Lista *l){
    Canzone* nuova_canzone = (Canzone*)malloc(sizeof(Canzone));
    set_Canzone(nuova_canzone);
    nuova_canzone->id = id_univoco++;
    nuova_canzone->next = l->testa;
    l->testa = nuova_canzone;
    l->lunghezza++;
}

//Cerca e stampa tutte le canzoni dell’artista indicato.
void ricerca_canzone_artista(Lista *l, char* artista){
    Canzone* current = l->testa;
    int trovata = 0;

    printf("Canzoni dell'artista %s:\n", artista);
    while (current != NULL) {
        if (strcmp(current->artista, artista) == 0) {
            stampa_Canzone(current, 1);
            trovata = 1;
        }
        current = current->next;
    }

    if (!trovata) {
        printf("Nessuna canzone trovata per l'artista %s\n", artista);
    }
}

//Libera correttamente la memoria di tutte le canzoni nella lista.
void libera_memoria(Lista* l){
      Canzone* current = l->testa;
    
    while (current != NULL) {
        Canzone* temp = current;
        current = current->next;
        free(temp);
    }
    free(l);
}

int main(){
    Lista* lista_canzoni = crea_lista();
    Lista* playlist = crea_lista();

    int scelta;
    char artista[50];

    do {
        printf("\n===== SPOTIFY 0.0.0.1 =====\n");
        printf("1. Inserisci nuova canzone nella lista\n");
        printf("2. Stampa lista canzoni\n");
        printf("3. Cerca canzoni per artista\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);
        getchar(); // pulisci buffer input

        switch (scelta) {
            case 1:
                inserisci_canzone_lista(lista_canzoni);
                break;
            case 2:
                stampa_lista(lista_canzoni);
                break;
            case 3:
                printf("Inserisci artista da cercare: ");
                fgets(artista, 50, stdin);
                ricerca_canzone_artista(lista_canzoni, artista);
                break;
            case 0:
                printf("Uscita...\n");
                break;
            default:
                printf("Scelta non valida. Riprova.\n");
        }

    } while (scelta != 0);

}
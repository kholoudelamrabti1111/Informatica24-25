/*titolo (stringa)
artista (stringa)
durata in secondi (int)
id univoco (assegnato automaticamente; ogni nuova canzone incrementa l’ID)
puntatore alla canzone successiva.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Canzone{
    int id;
    char titolo[50];
    char artista[50];
    int durata;
    struct Canzone* next;
}Canzone;

typedef struct lista{
    Canzone* testa;
    int lunghezza;
}

void set_Canzone(Canzone* c){
    printf("Inserisci il titolo");
    fgets("c->titolo, 50 , stdin");
    printf("Inserisci l'artista");
    fgets(c->artista, 50, stdin);
    printf("Inserisci la durata");
    scanf("%d", &c->durata);
    getchar();
}

void stampa_Canzone(Canzone* c, int n){
    printf("Stampa la lista delle canzoni\n");
    for(int i=0; i<n; i++){
        printf("titolo %s", c[i].titolo);
        printf("artista %s", c[i].artista);
        printf("durata %d", c[i].durata);
        printf("id %d", c[i].id);
    }
}

Lista* crea_lista(){
    Lista* lista = (Lista)malloc(sizeof(Lista));
    lista->testa=NULL;
    lista->lunghezza=0;
    return lista;
}

void stampa_lista(Lista* lista){
   Canzone* current = l->testa;

    printf("Lista:");
    while(current != NULL){
        printf("%d ->", current->dato);
        current = current->next;
   }
    printf("FINE LISTA\n");
    printf("Lunghezza %d\n", lista->lunghezza);
}
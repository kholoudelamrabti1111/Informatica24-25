#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Canzone{
    int id;
    chat titolo[20];
    char artista[20];
    int durata;
    struct Canzone* next;
}Canzone;

typedef struct Nodo{
    int dato;
    int lunghezza;

}Nodo;

void Set_Canzone(Canzone *c){
    printf("Inserisci canzone\n": );
    fgets(c->titolo, 20, stdin);
    printf("Inserisci l'artista della canzone\n: ");
    fgets(c->artista, 20, stdin);
    printf("Inserisici la durata della canzone\n": );
    scanf("%d", &c->durata);
    getchar();
}

void Stampa_Canzone(Canzone *c, int n){
    printf("Stampa canzoni\n: ");
    for(int i=0; i<n, i++){
        printf("Titolo %s", c[i].titolo);
        printf("Artista %s", c[i].artista);
        printf("Durata %d", c[i].durata);
        printf("Id %d", c[i].id);
    }
}

Lista *Crea_Lista(){
    Lista *c=(Lista*)malloc(sizeof(Lista));
    c->lunghezza=0;
    c->testa=NULL;
    return 0;
}
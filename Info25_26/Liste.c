typedef struct Nodo {
    int dato;
    struct Nodo* next;
}Nodo;

typedef struct {
    Nodo* testa;
    int lunghezza;
}Lista;

Lista* crea_lista(){
    Lista* lista = (Lista*)malloc(sizeof(Lista));
    lista->testa=NULL;
    lista_>lunghezza=0;
    return lista;
}

void stampa_lista(Lista* lista){
    Nodo* current = lista->testa;

    printf("lista:");
    while(current != NULL){
        printf("");
    }
}
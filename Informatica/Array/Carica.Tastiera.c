/*
COSTRUIRE UN VETTORE DI N ELEMENTI
CON VALORI LETTI DA TASTIERA
*/

#include <stdio.h>
#define MAX 5
int main(){
    int v[MAX], n=0;
    for(int i=0; i<MAX; i++){
        printf("Inserisci un numero: ");
        scanf("%d", &n);
    }
}
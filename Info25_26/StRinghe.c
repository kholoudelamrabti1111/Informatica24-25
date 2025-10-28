/*PROVARE LA LIBRERIA STRING.H PER LE SEGUENTI OPERAZION:
1. CALCOLO LUNGHEZZA STRINGA
2. CONTROLLARE SE DUE STRINGHE SONO UGUALI
3. COPIARE UNA STRINGA
4. CERCARE UN CARATTERE E COMUNICARE LA FREQUENZA 
5. CONCATENARE DUE STRINGHE 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* stringa;

int main(){
    stringa stringa1=malloc(10), stringa2=malloc(10);
    if(stringa1==NULL || stringa2==NULL){
        printf("Errore di allocazione di memoria!");
        return NULL;
    }
    printf("Inserisci la stringa1: ");
    printf("Inserisci la stringa2: ");
    fgets(stringa1, 10, stdin);
    fgets(stringa2, 10, stdin);

    

    len=strlen(frase);



}
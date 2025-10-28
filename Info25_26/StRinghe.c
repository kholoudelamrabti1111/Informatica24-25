/*PROVARE LA LIBRERIA STRING.H PER LE SEGUENTI OPERAZION:
1. CALCOLO LUNGHEZZA STRINGA
2. CONTROLLARE SE DUE STRINGHE SONO UGUALI
3. COPIARE UNA STRINGA
4. CERCARE UN CARATTERE E COMUNICARE LA FREQUENZA 
5. CONCATENARE DUE STRINGHE 
6. RICERCA STRINGA IN UN ALTRA MA SENZA A LIBRERIA STRING.H
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* stringa;
 
int main(){
    int len=0;
    stringa stringa1=malloc(10), stringa2=malloc(10);
    int scelta=0;
    if(stringa1==NULL || stringa2==NULL){
        printf("Errore di allocazione di memoria!");
        return 1;
    }
    printf("Inserisci la stringa1: ");
    printf("Inserisci la stringa2: ");
    fgets(stringa1, 10, stdin);
    fgets(stringa2, 10, stdin);


    switch (scelta)
    {
    case 1:
        printf("La lunghezza della stringa1 è: %s", strlen(stringa1));
        printf("La lunghezza della stringa2 è: %s", strlen(stringa2));
        break;
    
    case 2:
        

    default:
        break;
    }
}
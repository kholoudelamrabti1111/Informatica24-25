/*--*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *buffer;//puntatore alla stringa buffer
    int len; //lunghezza stringa

    printf("Inserisci la lunghezza della stringa: ");
    scanf("%d", &len);

    //alloco lo spazio in memoria della stringa
    buffer = (char*) malloc ((len + 1) *sizeof(char)); //len + 1 perchè tiene conto del \0
    if(buffer==NULL) return 1;

    printf("Inserisci una stringa: ");
    fgets(buffer, len+1, stdin);
    printf("Hai inserito: %s", buffer);

    free(buffer);
}


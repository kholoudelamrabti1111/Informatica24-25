/*FUNZIONE FGETS*/
#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main(){
    char buffer[20];//dichiarazione effettiva di array di caratteri

    printf("Inserisci una stringa: ");
    if(fgets(buffer, 20, stdin)!=NULL);// è funzione, dove ha nome array e dimensione
        prinf("Hai inserito: %s", buffer);
}
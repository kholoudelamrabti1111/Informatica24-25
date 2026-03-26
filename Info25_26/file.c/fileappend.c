/*Esempio di apertura file in append*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *f;
    char frase[200];
    char scelta;
    
    //apriamo il file in append
    f = fopen("numeri.txt", "a");
    if(f == NULL){
        printf("Errore apertura file\n");
        exit (1);   
    }
    do{
        printf("Inserisci una frase: ");
        fgets(frase, sizeof(frase), stdin);
        //scriviamo la frase sul file
        fputs(frase, f);

        printf("Vuoi inserire un'altra frase? (s/n): ");
        scanf("%c", &scelta);
        getchar();
    }while(scelta == 's' || scelta == 'S');
    fclose(f);
    printf("Le frasi sono state salvate sul file numeri.txt");
    return 0;
}
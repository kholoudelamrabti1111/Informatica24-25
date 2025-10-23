/*Data una stringa contare il numero delle vocali con typedef*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef char* string;
void compatta(string buffer, int len){//compattare la stringa, serve a togliere anche il \n e quindi si diminuisce la lunghezza della stringa
    if(len>0 && buffer[len-1]=='\n'){//togliamo l'invio
        buffer[len-1]='\0';
        len--;
    }
}

int conta(string frase){
    int cnt=0;
    for(int i=0; frase[i] !='\0'; i++){
        char c = tolower(frase[i]);//trasforma ogni carattere in minuscolo
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            cnt++;
    }
    return cnt;
}
int main(){
    char buffer[200];
    string frase;

    printf("Inserisci una stringa: ");
    fgets(buffer, sizeof(buffer), stdin);
    int len=strlen(buffer);
    compatta(buffer,len); 
    frase = (string)malloc((len+1)*sizeof(char));
    if(frase==NULL){
        printf("Errore di allocazione di memoria!");
        return 1;
    }

    strcpy(frase, buffer);//copia il contenuto del buffer nella variabile frase

    printf("Il numero delle vocali è: %d", conta(frase));
free(frase);
return 0;

}
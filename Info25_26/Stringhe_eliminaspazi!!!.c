/*Eliminare gli spazi da una stringa*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* string;
void Trova(string buffer, int len, int i){
    for(int j=i+1; i<len; i++){
        buffer[j]=buffer[j+1];
    }
    len--;
    buffer=(string)realloc(buffer, len *sizeof(char));

}

void Trova_Spazio(string buffer, int len){
    for(int i=0; i<len; i++){
        if(buffer[i]== ' '){
            Trova(buffer, len, i);
        }    
    }  
}
  
void compatta(string buffer, int len){
    if(len>0 && buffer[len-1]=='\n'){
        buffer[len-1]='\0';
        len--;
    }
}


int main(){
    char buffer[200];
    string frase;

    printf("Inserisci una stringa: ");
    fgets(buffer, sizeof(buffer), stdin);
    int len=strlen(buffer);
    
    frase = (string)malloc((len+1)*sizeof(char));
    strcpy(frase, buffer);
    compatta(buffer,len); 
    if(frase==NULL){
        printf("Errore di allocazione di memoria!");
        return 1;
    }
    Trova_Spazio(frase, len);
    printf("%s", frase);

free(frase);
return 0;
}
/*data una stringa scrivera all'inverso*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* string;

void stringaInversa(string frase, int dim){
    char tmp;
    int cnt=0;

    for(int i=dim-2; i>=dim/2; i--){
        tmp=frase[i];
        frase[i]=frase[cnt];
        frase[cnt]=tmp;
        cnt++;
    }
}

int main(){
    string frase=(string)malloc(20*sizeof(char));
    if(frase==NULL){
        printf("Errore");
        return 1;
    }

    printf("Inserisci la stringa:");
    fgets(frase, 20, stdin);
    stringaInversa(frase, strlen(frase));
    printf("La stringa inversa è %s", frase);

}
/*Scrivi un programma in C che chieda all'utente un numero intero N compreso tra 1 e 26
quindi crea una stringa composta da tutte le prime N lettere dell'alfabeto.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    char lettera='a';
    char* str;

    do{
        printf("Inserisci un numero compreso tra 1 e 26: ");
        scanf("%d", &n);
    }while(n<=0 || n>26);

    str=(char*)malloc((n+1)*sizeof(char));

    for(int i=0; i<n; i++){
        str[i]=lettera++;
    }
    str[n]='\0';
    printf("%s", str);
}
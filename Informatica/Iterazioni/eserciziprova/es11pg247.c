/*Scrivi un programma che, dati in input n numeri interi e un numero x, 
determini:
- quanti numeri sono maggiori di x;
- quanti numeri sono minori di x;
- quanti numeri sono uguali a x.
*/
#include <stdio.h>
int main(){
    int n, x, num, maggiore=0, minore=0, uguale=0;
    // n mi indica quanti numeri deve inserire l'utente
    // x numero che inserisce l'utente, mi serve per confrontarlo con i numeri(num).
    // num lo prendo dall'utente, lo scopo è confrontarli con x.
    //  maggiore è un contatore che serve per contare numeri maggiori
    // minore un contatore che serve per contare i numeri minori
    // uguale contatore che serve per contare i numeri uguali.


    printf("Quanti numeri vuoi inserire: ");/*le variabili che sono fuori dal ciclo si mettono una sola volta*/
    scanf("%d", &n);//n non cambia
    printf("Inserisci un valore: ");
    scanf("%d", &x);//x non cambia
    for(int i=0; i<n; i++){// serve per ripetere un'azione per un tot di giri.
        printf("inserisci il %d numero: ", i+1);
        scanf("%d", &num);
        if(num>x){
            maggiore++;
        }else if(num<x){
            minore++;
        }
        else{
            uguale++;
        }
        //se num è maggiore di x allora si aumenta il contatore.
        // altrimenti se un num è minore di x aumenta il contatore.
        // altrimenti num è uguale a x si aumenta il contatore.
    }
    printf("i numeri maggori di %d sono %d:\n", x,maggiore);
    printf("i numeri minori di %d sono %d:\n", x,minore);
    printf("i numeri uguali di %d sono %d:\n", x,uguale);
    

   
   
    
}
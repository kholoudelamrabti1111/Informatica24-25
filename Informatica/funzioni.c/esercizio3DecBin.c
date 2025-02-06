/*Dato un valore eseguire la conversione da decimale a binario*/

#include <stdio.h>
#include <mat.h>
long converti(int _n);
int main(){
    int n=0;
    long conv=0;
    do{
        printf("Inserisci un valore: ");
        scanf("%d", %n);

    }while(n<=0);
    conv=converti(int n);
    printf("%ld\n", conv);
}

long converti(int _n){
    int quoz=_n;
    int resto=0;
    int cont=0;
    int _conv=0;//copia del conv che c'è nel main
    while(quoz!=0){
        resto=quoz%2;//18|2=9, con resto 0
        quoz=quoz/2; //18|2=9 poi il 9|2 quoz cambia numero
        _conv+=resto*pow(10,cont);//pow calcola la potenza
        cont++;
    }
    return _conv;
}
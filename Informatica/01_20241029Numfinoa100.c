/*Chiedi all'utente di inserire un massimo di 5 numeri finio a che la somma dei numeri inseriti non è 100*/


#include <stdio.h>
int main(){
    int num=1;
    int somma=0;

    printf("Inserisci un numero");
    scanf("%d", &num);
    somma=num;

    if(somma>100){
        printf("Hai superato la soglia");
    else
        printf("Inserisci un altro numero");
        scanf("%d", &num);
        somma+=num;
        
    }
}
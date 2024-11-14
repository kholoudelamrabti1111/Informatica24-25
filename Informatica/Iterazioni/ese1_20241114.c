/*
DATI 5 VALORI STAMPARLI
*/
#include <stdio.h>

int main(){
    int num; //10 variabili
    int cnt=0;//variabile contatore inizializzata a 0

    while(cnt<5){
        printf("\nInserire un numero: ");//abbiamo ripetuto 5 volte
        scanf("%d" , &num);
        printf("Il valore inserito è: %d\n", num);
        cnt++;//cnt=cnt+1;

    }

   

}

return 0;
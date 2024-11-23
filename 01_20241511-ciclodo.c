/*Chiedi all'utente di inserire 10 valori numerici a alla fine mostra qual'è il maggiore tra i valori inseriti*/

#include <stdio.h>

int main(){
    int num;
    int max;
    int cnt=0;

    do{
        printf("Inserisci un numero");
        scanf("%d", &num);
        cnt++;
        if(num>max || cnt==0)
    } while(cnt<=10);
        printf("Il valore massimo è %d", max);
    return 0;
}
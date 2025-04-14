/*Supponete che la parità di scambio tra Euro e Dollaro sia la seguente:1 euro =
 1,23 dollari. il programma deve chiedere all'utente se intende cambiare:
-dollari in euro;
-euro in dollari.
data una somma di denaro calcolare il controvalore.*/

#include <stdio.h>

int main(){
    float sommadenaro=0, sommaconvertita=0;
    int scelta=0;
    const float tasso=1.23;

    printf("Scegli l'operazione che vuoi fare: 1 per cambio dollaro/euro, 2 cambio euro/dollaro:");
    scanf("%d", &scelta);
    printf("Inserisci il valore che vuoi convertire: ");
    scanf("%f", &sommadenaro);

    switch(scelta){
        case 1:
            sommaconvertita = sommadenaro / tasso;
            printf("&f $ = %f €", sommadenaro, sommaconvertita);
            break;
        case 2:
            sommaconvertita = sommadenaro * tasso;
            printf("%f € = %f $", sommadenaro, sommaconvertita);
            break;
        default:
            printf("Hai scelto un'operazione non valida!");
            break;

    }
    if(scelta==1){
        sommaconvertita = sommadenaro / tasso;
        printf("%f $ = %f €", sommadenaro, sommaconvertita);
    } else if(scelta==2){
        sommaconvertita = sommadenaro * tasso;
        printf("%f € = %f $", sommadenaro, sommaconvertita);

    }else{
        printf("Hai scelto un'operazione non valida!");
    }

}
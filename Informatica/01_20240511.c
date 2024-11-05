/**/

#include <stdio.h>
int main(){
    int reparto;
    float prezzo;
    float sconto;
    printf("scegli un reparto");
    scanf("%d", &reparto);
    printf("Inserisci il prezzo del prodotto");
    scanf("%f", &prezzo);

    switch(reparto){
        case 1:
            sconto=0;
            break;
        case 2:
            sconto=(prezzo/100)*3;
            break;
        case 3:
            sconto=(prezzo/100)*2;
            break;
        case 4:
            sconto=(prezzo/100)*5;

        default:
            printf("Il reparto è inisitente");
            sconto=0;

    }

    printf("Il prezzo finale è %f", prezzo-sconto);
    return 0;
}
/*Dato il raggio calcolare la circonferenza e l'area del cerchio*/
#include <stdio.h>
void calcola_circonferenza(float *_raggio, float *_circonferenza);
void calcola_area(float *_raggio, float *_area);

int main(){
    float r, A, C;
    
    do{
        printf("Inserisci il raggio: ");
        scanf("%f", &r);
    }while(r<=0);


    calcola_circonferenza(&r, &C);//chiamata delle funzioni che calcola la circonferenza e l'area
    calcola_area(&r, &A);

    printf("La circonferenza vale %.2f e l'area del cerchio vale %.2f\n", C, A);


}

void calcola_circonferenza(float *_raggio, float *_circonferenza){
    *_circonferenza= 2*3.14* (*_raggio);
}

void calcola_area(float *_raggio, float *_area){
    *_area= (*_raggio) * (*_raggio) * 3.14;
}


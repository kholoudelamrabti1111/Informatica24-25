/*Dato il raggio calcolare la circonferenza e l'area del cerchio*/
#include <stdio.h>
float calcola_circonferenza(float raggio);
float calcola_area(float raggio);

int main(){
    float r, C, A;
    do{
        printf("Inserisci il raggio: ");
        scanf("%f", &r);

    }while(r<=0);

    C=calcola_circonferenza(r);
    A=calcola_area(r);
    printf("La circonferenza vale %.2f e l'area del cerchio vale %.2f\n", C, A);
}    

float calcola_circonferenza(float raggio){
    return 2*3.14*raggio;
}

float calcola_area(float raggio){
    return raggio*raggio*3.14;
}




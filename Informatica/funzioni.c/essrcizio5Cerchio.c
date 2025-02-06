/*Dato il raggio calcolare la circonferenza e l'area del cerchio*/
#include <stdio.h>
const float calcola_circonferenza(float raggio);
const float calcola_area(float cerchio);

int main(){
    float r, c, circonferenza=0, area=0;
    do{
        printf("Inserisci il raggio: ");
        scanf("%f", &r);

    }while(r<=0);

    circonferenza=calcola_circonferenza(r);
    area=calcola_area(c);
    printf("La circonferenza vale %f e l'area del cerchio vale %f", r,c);
}    

const float calcola_circonferenza(float raggio){
    raggio=2*3,14;
}

const float calcola_area(float cerchio){
    int raggio;
    cerchio=raggio*raggio*3.14;
}




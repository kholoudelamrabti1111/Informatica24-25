/*Leggi il raggio di una circoferenza e calcola il perimetro e l'area del cerchio che essa definita.*/

#include <stdio.h>
float calcola_perimetro(float raggio);
float calcola_area(float raggio);

int main(){
    float r, A, P;
    do{
        printf("Inserisci un valore: ");
        scanf("%f", &r);
    }while(r<0);

    A=calcola_area(r);
    P=calcola_perimetro(r);
    printf("L'area è %.2f, il perimetro è %.2f", A, P);
    return 0;
}

float calcola_perimetro(float raggio){
    return 2*3.14*raggio;
}
float calcola_area(float raggio){
    return raggio*raggio*3.14;
}





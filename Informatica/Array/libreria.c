/*
    Sviluppiamo le funzioni
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void richiediValori(int vett[], int dim){
    int n=0, i=0;
    
    while(i<dim){
        printf("Inserisci un valore: ");
        scanf("%d", &n);
        if(n%2==0){
            vett[i]=n;
            i++;
        }
        
    }
}
    

    void stampaVett(int vett[], int dim, char sep){
        for(int i=0; i<dim; i++){
            printf("%d%c", vett[i], sep);
        }
    }

    void valoriRandom(int vett[], int dim){

        srand(time(NULL));
        for(int i=0; i<dim;i++){
            vett[i]=rand()%(100-1+1)+1;
            printf("%d\n",vett[i]);
        }

    }
    void calcolaMedia(int vett[],int dim, float media){
        int somma=0;
        for(int i=0; i<dim; i++){
            somma+=vett[i];
            media=somma/i;
        }
        printf("la media è %f", media);
    } 

    float calcolaMedia(int vett[], int dim){
        float media=0;, somma=0;

        for(int i=0; i<dim; i++){
            somma+=vett[i];
        }
        return somma/dim;
    }

    void caricaBubble(int vett[],int dim){
        int temp=0;

        for(int i=0; i<dim-1; i++){
            for(int j=0; j<dim-i-1; j++){
                if(vett[j]>vett[j+1]){
                    temp=vett[j];
                    vett[j]=vett[j+1];
                    vett[j+1]=temp;
                }
            }
        }
    }
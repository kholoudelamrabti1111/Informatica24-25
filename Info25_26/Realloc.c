/*Scrivi un programma in C che memorizzi i voti di uno studente*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float *voti=NULL;
    int num=0;

    printf("Quanti voti vuoi aggiungere?");
    scanf("%f", &num);
    voti=(float*)malloc(num *sizeof(float));
    if(voti==NULL){
        printf("Errore di allocazione della memoria!!");
        return 1;

        for(int i=0; i<num; i++){
            printf("Inserisci il voto %df", i+1);
            scanf("%f", &voti[i]);
        }
        voti=(float*)realloc(voti, (num+1) *sizeof(float));
        if(voti==NULL){
            printf("Errore di allocazionde della memoria!!");
            return 1;
            num++;
            printf("Inserisci il voto %d", num);
            scanf("%f", &voto[num-1]);

        }
        free(voti);
    }
}
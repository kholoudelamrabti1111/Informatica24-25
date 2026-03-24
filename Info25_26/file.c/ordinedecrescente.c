/*Scrivere una funzione che preso in ingresso
il nome del file contenente interi, 
lo modifichi in modo tale da contenere gli stessi
numeri ma ordinati in senso decrescente
*/
#include <stdio.h>
#include <stdlib.h>

//LEGGERE, ORDINARE E SCRIVERE
void OrdinaFile(char nomeFile[]){
    FILE *Fp;
    int vettore[100], n=0, j, tmp, i;

    Fp = fopen(nomeFile, "r");
    if(Fp== NULL){
        printf("Errore apertura file\n");
        exit (1);
    }
    //lettura dei numeri dal file
    //leggerai dei numeri da fp e li metterai nel vettore fino a quando non finisce il file
    while(fscanf(Fp, "%d ", &vettore[n]) == 1){//1 SE LEGGE UN NUMERO, 0 SE NON LEGGE 
        printf("Elemento %d: %d\n", n+1, vettore[n]);//stampo i numeri letti dal file
        n++;
    }
    fclose(Fp);
    
    //dimensione dell'array
   // ordiniamo i valori con il bubble sort
    for(i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(vettore[i] < vettore[j]){
                tmp = vettore[i];
                vettore[i] = vettore[j];
                vettore[j]= tmp;
            }
        }
    }
    /*riapriamo il file per scriverci i numeri ordinati*/
    Fp = fopen(nomeFile, "w");
    if(Fp == NULL){
        printf("Errore apertura file\n");
        exit (1);
    }
    for(i=0; i<n; i++){
        fprintf(Fp, "%d\n", vettore[i]);//scrivo i numeri ordinati nel file
    }
    fclose(Fp);   
}


int main(){
    char nome[20];

    printf("Inserisci il nome del file: ");//chiedo il nome del file all'utente
    scanf("%s", nome);

    OrdinaFile(nome);

}
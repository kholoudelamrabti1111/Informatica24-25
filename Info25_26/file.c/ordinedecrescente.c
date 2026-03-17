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
    int vettore[100], i=0;

    Fp = fopen(nomeFile, "r");
    if(Fp== NULL){
        printf("Errore apertura file");
        return 1; 
    }
    //lettura dei numeri dal file
    while(fscanf(Fp, "%d", &vettore[i]) == 1){//1 SE LEGGE UN NUMERO, 0 SE NON LEGGE 
        printf("Elemento %d: %d\n", i+1, vettore[i]);
        i++;
    }
    fclose(Fp);
    /*Ordiniamo i valori*/
    n=i+1;//dimensione dell'array
    for(i=0; i<n; i++){
        
    }
}


int main(){
    char nome[20];

    printf("Inserisci il nome del file: ");//chiedo il nome del file all'utente
    scanf("%s", nome);

    OrdinaFile(nome);

}
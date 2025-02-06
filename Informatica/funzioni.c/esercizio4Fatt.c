/*Calcolare il fattoriale di un numero*/
#include <stdio.h>
long numeroFattoriale(int _a);

int main(){
    int a;
    long fatt;
    do{
        printf("Inserisci un valore: ");
        scanf("%d", &a);
    }while(a<0);

    fatt=numeroFattoriale(a);//parametro effettivo
    printf("Il calcolo del fattoriale di %d è %ld\n", a, fatt);

}

long numeroFattoriale(int _a){
    long fatt=1;
    
    for(int i=1; i<=_a; i++){
        fatt*=i;
    }

    return fatt;

    
}
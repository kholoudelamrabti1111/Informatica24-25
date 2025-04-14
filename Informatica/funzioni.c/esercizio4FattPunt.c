   /*Calcolare il fattoriale di un numero*/
#include <stdio.h>
void numeroFattoriale(int *_a, long *_fatt);

int main(){
    int a;
    long fatt=1;

    do{
        printf("Inserisci un valore: ");
        scanf("%d", &a);
    }while(a<0);

    numeroFattoriale(&a, &fatt);
    printf("Il fattoriale di %d è %ld\n", a, fatt);

}

void numeroFattoriale(int *_a, long *_fatt){
    for(int i=1; i<=*_a; i++){
        *_fatt*=i;
    }
}    
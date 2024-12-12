/*DATI N NUMERI IN INPUT (CON N CHIESTO ALL'UTENTE STRETTAMENTE MAGGIORE DI 5), CALCOLARE
E MOSTRARE LA SOMMA DEI NUMERI NEGATIVI E DEI NUMERI POSITIVI*/

#include <stdio.h>
int main(){
int n=0;
int num=0;
int cnt=0;
int sommapos=0;
int sommaneg=0;

    do{
        printf("Inserisci quanti numeri vuoi:");
        scanf("%d", &n);
    } while(n<=5);

    for(int i=0; i<n; i++){//i<n quindi deve partire da 0 in su, deve essere minore del numero
        printf("Inserisci un valore: ");
        scanf("%d", &num);

        if(n>0){
            sommapos+=n;// struttura della somma dei numeri negativi e positivi 
        }else if (n<0){
            sommaneg+=n;
        }
    
    }
    printf("La somma dei numeri positivi è %d\n", sommapos);
    printf("La somma dei numeri negativi è %d\n", sommaneg);
}

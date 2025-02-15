/*DATO UNA SEQUENZA DETERMINARE QUANTI NUMERI SONO PERFETTI 
IL PROGRAMMA TERMINA QUANDO IL NUMERO  PERFETTO SUPERA UNA SOGLIA*/
#include <stdio.h>
int main(){
    int somma=0, k, n, perf=0;

    do{
        printf("Inserisci una numero: "):
        scanf("%d", &n);
    }while(n<=0);

    do{
        printf("Inserisci il valore dellasoglia: "):
        scanf("%d", &k);
    }while(k<=0);

    do{
        for(int i=1; i<n; i++){
            if(n%i==0){
                somma+=i;
            }
        }
        if(somma==n){
            printf("%d è un numero perfetto: ", n);
        }else{
            printf("Il numero non è perfetto: ");
        }
    }while();
}




    

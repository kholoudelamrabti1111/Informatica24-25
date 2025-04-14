/*Data una sequenza di numeri (si termina non appena si inseriscono due numeri consecutivi uguali),
determinare il minimo e il massimo e verificare se uno è il multiplo/divisore dell’altro.*/

#include <stdio.h>
int main(){

    int n1, m, min, max; 

    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n1);
    
        if(m==0){
            max==n1;
            min==n1;
            m==n1;
    
        }else{
            if(n1>max){
                max==n1; 
            }

            if(n1<min){
                min==n1;
            }
        }


    }while(n1<0);

    printf("Il numero minimo è:%d\n", min);
    printf("Il numero massimo è:%d\n", max);
    
    if(max%min==0){
        printf("Il massimo è divisibile per minimo:");
    }else{
        printf("Nessuno è divisibile dell'altro:");
    }
    
        



    
}
    
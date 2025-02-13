/*STAMPARE I DIVISORI PARI DI UNA SEQUENZA DI NUMERI
TERMINA NON APPENA SI INSERISCI UNO 0*/

#include <stdio.h>
int main (){
    int n;

    do{
        do{
            printf("Inserisci una sequenza di numeri: ");
            scanf("%d", &n);
        }while(n<0);
        if(n!=0){
            //calcoliamo i divisori di n.
            printf("I divisori pari di %d sono: \n", n);
            for(int i=1; i<=n; i++){
                if(n%i==0 && i%2==0){
                    printf("%d", i);


                }

            }
        }
        else
            printf("\nHai inserito uno 0");
    }while(n!=0);
    



   

    
}
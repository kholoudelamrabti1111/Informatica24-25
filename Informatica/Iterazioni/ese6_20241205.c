/*DATI N NUMERI, SOMMARLI 4 A 4
TERMINA NON APPENA SI INTRODUCE UNO 0*/

#include <stdio.h>
int main(){
    int n;
    int cnt=0;
    int somma;

    do{
        printf("Inserisci un numero");
        scanf("%d", &n1);
        cnt++;
        somma+=n1;
        if(n1%4==0){
            printf("la somma è: %d", somma);
        }
    }while(n!=0);

}
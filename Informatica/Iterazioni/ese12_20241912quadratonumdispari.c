/*DATO UN NUMERO N CALCOLARE IL SUO QUADRATO
SOMMANDO I PRIMI N NUMERI DISPARI.
ES:N=7 7^2=49
1+3+5+7+9+11+13=49
*/

#include <stdio.h>
int main(){
    int n=0;
    int somma=0;

    do{
        printf("Inserisci un numero");
        scanf("%d", &n);
    }while(n<=0);

    for(int i=1; i<n*2; i+=2){
        somma+=i;
    }
    printf("%d^2= %d", n, somma);
}
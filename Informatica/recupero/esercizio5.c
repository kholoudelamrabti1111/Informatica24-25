/*DATI DUE NUMERI  VERIFICA SE SONO AMICALI*/
#include <stdio.h>
int main(){
    int n1, n2, somma1=0, somma2=0, divisori=1;

    printf("Inserisci due numeri: ");
    scanf("%d%d", &n1, &n2);

    do{
        if(n1%divisori==0){
            somma1+=divisori;
        }
        divisori++;
    }while(divisori<n1);
    divisori=1;
    do{
        if(n2%divisori==0){
            somma2+=divisori;
        }
        divisori++;
    }while(divisori<n2);

    if((somma1==n2) && (somma2==n1)){
        printf("I due numeri %d e %d sono amicali", n1, n2);
    }else{
        printf("I due numeri %d e %d non sono amicali", n1, n2);
    }

}

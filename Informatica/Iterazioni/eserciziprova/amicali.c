/*verifica se due numeri rischiesti in input sono amicali */
#include <stdio.h>
int main(){
    int num1, num2, divisori=1, somma1=0, somma2=0;
    // nu1 primo numero
    // num2 secondo numero
    // è il contaore che va da 1 al numero stesso
    // somma1 e somma2 l somma dei divisori dei due numeri.

    printf("inserisci un numero: ");
    scanf("%d", &num1);
    printf("inserisci un numero: ");
    scanf("%d", &num2);

    do{
        if(num1%divisori==0){
            somma1+=divisori;
        }
        divisori++;

    }while(divisori<num1);
    divisori=1;// assegna che divisore è di nuovo 1
     do{
        if(num2%divisori==0){
            somma2+=divisori;
        }
        divisori++;

    }while(divisori<num2);
   
   if((somma1==num2) && (somma2==num1)){
        printf("In due numeri, %d e %d  sono amicali\n", num1, num2 );
   }else{
    printf("I due numeri %d e %d non sono amicali\n", num1, num2);
   }



}
/*Richiesti due numeri da tastiera verifica e comunica se sono numeri Amici/Amicali.
Definizione di numeri Amicali: due numeri si dicono amicali se la somma dei divisori del primo
numero è uguale al secondo numero e viceversa.*/
#include <stdio.h>
int main(){
    int num1, num2, divisori=1, somma1=0, somma2=0;

    printf("Inserisci un numero");
    scanf("%d", &num1);
    printf("Inserisci un numero");
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
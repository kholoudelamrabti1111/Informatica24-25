/*Data una sequenza di valori verificare se i valori presi a coppie
risultano essere amicali si termina quando uno dei valori vale 0
*/
#include <stdio.h>
void numeri_amicali(int *_n1, int *_n2);

int main(){
    int n1, n2;

    printf("Inserisci due valori: ");
    scanf("%d%d", &n1, &n2);

    numeri_amicali(&n1, &n2);
    printf("I due numeri %d e %dsono amicali", n1, n2);
}

void numeri_amicali(int *_n1, int *_n2){
    int divisori=1, somma1=0, somma2=0;
        do{
            if(*_n1%divisori==0){
                somma1+=divisori; 
            }
            divisori++;
        }while(divisori< *_n1);
        divisori=1;
        do{
            if(*_n2%divisori==0){
                somma2+=divisori; 
            }
            divisori++;
        }while(divisori< *_n2);
   
        if((somma1== *_n2) && (somma2== *_n1)){
            printf("In due numeri, %d e %d  sono amicali\n", *_n1, *_n2 );
        }else{
        printf("I due numeri %d e %d non sono amicali\n", *_n1, *_n2);
        }
}
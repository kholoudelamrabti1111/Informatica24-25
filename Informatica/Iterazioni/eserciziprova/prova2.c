/*SCRIVI UN PROGRAMMA CHE LEGGE UN NUMERO NUM E VISUALIZZA TUTTI I NUMERI PARI INFERIORI A QUEL NUMERO*/
#include <stdio.h>
int main(){
    int num, cnt=0;
    
    printf("Inserisci un numero: ");
    scanf("%d", &num);
    cnt=num-1;
    printf("I numeri pari sono:\n");
    do{
        if(cnt%2==0){
            printf("%d \n", cnt);
        }
        cnt--;
    }while(cnt>0);
    
}
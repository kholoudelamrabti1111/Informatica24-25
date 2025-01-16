/*SCRIVI UN PROGRAMMA CHE LEGGE UN NUMERO NUM E VISUALIZZA TUTTI I NUMERI PARI INFERIORI A QUEL NUMERO*/
#include <stdio.h>
int main(){
    int n, cnt=0;
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    cnt=n-1;
    printf("I numeri sono pari:\n");
    do{
        if(cnt%2==0){
            printf("%d\n", cnt);
        }
        cnt--;
    }while(cnt>0);

}    
/*verifica se due numeri rischiesti in input sono amicali*/
#include <stdio.h>
int main(){
    int n1, n2, diviso, somma1=0, somma2=0;
    printf("Inserisci un numero");
    scanf("%d", &n1);
    printf("Inserisci un numero");
    scanf("%d", &n2);
    do{
        if(n1%diviso==0){
            somma1+=diviso;
        }diviso++;
    }while(n2%diviso==0);
        somma2+=diviso;
        diviso++;
        
}
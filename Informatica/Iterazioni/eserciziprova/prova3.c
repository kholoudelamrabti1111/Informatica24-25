/*SCRIVI UN PROGRAMMA CHE CHIEDE IN iNGRESSO UN NUMERO FINCHE' NON SI INSERISCE 
UN NUMERO DISPARI. QUANDO QUESTO AVVIENE, IL PROGRAMMA TERMINA SCRIVENDO QUANTI NUMERI PARI 
ERANO INSERITI IN PRECEDENZA.
*/
#include <stdio.h>
int main(){
    int n, cnt=0;
    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);
        if(n%2==0){
            cnt++;
        }else{
            printf("Il numero inserito è dispari\n");
        }
    }while(n%2==0);
    printf("i numeri pari sono: %d", cnt);

}
/*DATO UN NUMERO A PIU CIFRE STAMPARE QUELLE DI POSIZIONE PARI
 Esempio 5231    stamperà: 3 e 5*/
#include <stdio.h>
int main(){
    int n, cifra;
    do{
        printf("Inserisci un numero a quattro cifre : ");
        scanf("%d", &n);
    }while(n<1000 || n>9999);
    //in modo generico ci assicuriamo che n sia positivo
    /*do{
        printf("Inserisci un numero a quattro cifre : ");
        scanf("%d", &n);
    }while(n<=0):*/

    for(int i=1; i<=4; i++){
        cifra = n%10;//prendiamo il resto della divisone di n con 10
        n=n/10;
        if(i%2==0){
            printf("La cifra di posizione pari è: %d\n", cifra);
        }
    }

    /*
    while(n!=0){
    
    } 
    */
}

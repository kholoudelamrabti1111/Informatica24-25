/*calcolare il quoziente fra due numeri applicando
il metodo delle sottrazioni successive*/

#include <stdio.h>
int main(){
    int n1;
    int n2;
    int quoz=0;
    int resto;
    int temp;
    do{
        printf ("Inserisci il primo valore: ");
        scanf("%d", &n1);
        printf ("Inserisci il secondo valore: ");
        scanf("%d", &n2);
       
    }while(n1<=0 || n2<=0);
    if(n2<n1){
        temp=n1;
        n1=n2;
        n2=temp;

    }
    resto=n1;
    while(resto>=n2){
        resto-=n2;
        quoz++;
    }
    printf("Il risultato della divisione è %d con resto %d\n", quoz, resto);
}

return 0;
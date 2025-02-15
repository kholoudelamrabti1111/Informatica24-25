/*Realizza una funzione che determina e restituisce il valore maggiore tra i due numeri*/

#include <stdio.h>
int maggiore(int n1, int n2);
int main(){
    int n1,n2;

    do{
        printf("Inserisci due numeri: ");
        scanf("%d%d", &n1, &n2);
    }while(n1<0 && n2<0);

    printf("Il maggiore tra i due è %d", maggiore(n1, n2));
}

int maggiore(int n1, int n2){
    int max;
    if(n1>n2){
        max=n1;
    }else{
        max=n2;
    }
    return max; 
}


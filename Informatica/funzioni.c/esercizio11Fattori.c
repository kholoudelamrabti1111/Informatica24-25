/*DATO UN VALORE STAMPARE I SUOI FATTORI
ES: 28= 2*2*7 
ES: 36=2*13
28/2
14*/
#include <stdio.h>
void fattori(int *_n);
int main(){
    int n;

    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);
    }while(n<=0);

    fattori(&n);
}
void fattori(int *_n){
    int i=2;
    printf("I fattori di %d sono: ", *_n);
    while(*_n!=1 && i!=1){
        if(*_n%i==0){
            printf("%d*", i);
            *_n=*_n/i;
            i=1;
        }
        i++;
    }
       
}


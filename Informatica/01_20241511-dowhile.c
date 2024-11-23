/*Scrivi un programma che legge un numero strettamente e visualizza i numeri pari inferiori a tale 0*/

#include <stdio.h>

int main(){
    int num;
    do{
        printf("Inserisci un numero");
        scanf("%d", &num);

    }while(num<0);
    if(num%2==1)
    num--;
    while(num!=0){
        printf("%d\n", num);
        num=num-2;
    }
    return 0;
}

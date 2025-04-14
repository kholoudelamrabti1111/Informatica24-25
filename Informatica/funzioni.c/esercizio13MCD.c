/*Scrivi un programma che prenda in input due numeir interi e conti quanti sono i divisori comuni.*/
#include <stdio.h>
void calcola_mcd(int *_num1, int *_num2);
void calcola_divisori_comuni(int *_mcd, int *num_divisori);
int main(){
    int num1, num2, mcd, num_divisori;

    do{
        printf("Inserisci un numero: ");
        scanf("%d", &num1);
        printf("Inserisci un numero: ");
        scanf("%d", &num2);
    }while(num1<=0 || num2<=0);

    calcola_mcd(&num1, &num2);
    mcd=num1; 

    calcola_divisori_comuni(&mcd, &num_divisori);

    printf("Il numero di divisori comuni tra %d e %d e: %d", num1, num2, num_divisori);
}
void calcola_mcd(int *_num1, int *_num2){
    int temp;
    while(*_num2!=0){
        temp=*_num2;
        *_num2=*_num1 % *_num2;
        *_num1=temp;
    }
}

void calcola_divisori_comuni(int *_mcd, int *num_divisori){
    *num_divisori=0;
    for(int i=1; i<=*_mcd; i++){
        if(*_mcd%i==0){
            (*num_divisori)++;
        }
    }
}

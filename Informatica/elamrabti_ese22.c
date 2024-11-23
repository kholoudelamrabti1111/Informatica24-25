/*DATO UN NUMERO N POSITIVO NON NULLO MINORE DI 20 E UN NUMERO C(tra
1 e 9) STAMPARE TUTTI I MULTIPLI DI C MINORI DI N.*/

#include <stdio.h>

int main(){
    int N; 
    int C;
    int multiplo;

    printf("Inserisci un valore inferiore a 28");
    scanf("%d", &N);
    printf("Inserisci un valore tra 1 e 9");
    scanf("%d", &C);

    if(C>=1 && N<20)
        if(N>=20 && N!=0 && N<=0)
            printf("\n il numero è multiplo");
}
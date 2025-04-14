/*INSERIRE UNA SERIE DI VALORI FIN QUANDO LA LORO SOMMA NON SUPERA
200, CALCOLARNE LA MEDIA E IL NUMERO DI VALORI INSERITI.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num=0;
    int somma=0;
    int media=0;
    printf("Inserisci un numero");
    scanf("%d", &num);
    somma=num;

    if(somma>200){
        printf("hai superato la soglia");
    }
    else 
        printf("Inserisci un'altro numero");    
        scanf("%d", &num);
        somma+=num;
    
    srand(time(NULL));
    num=rand()%num+1;
    printf("Il valore casuale è %d",num);








}
/*Scrivi un programma che chieda un numero intero in input e mostri in putput se il numero è apri o dispari 
usando il metodo delle sottrazioni successive*/

#include <stdio.h>

int main(){
    int num;
    printf("Inserisic un numero");
    scanf("%d", &num);
    while(num>=2){
        num=num-2;
    }
    if(num==0){
        printf("Il numero è pari");
    }
    else{
        printf("Il numero è dispari");
     }
     
}    return 0;

/*scrivi un programma che legge dieci numeri e ne stampa il massimo*/
#include <stdio.h>
int main(){
    int n, cnt=0, max=0;
    // n è il numero che deve inserire l'utente.
   do{
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    if(n>max){
        max=n;// variabili temporanea, cambia valore, n viene messo dall'utente.
    }
    cnt++;
   }while(cnt<3);
   printf("il massimo tra i numeri è %d", max);  

}
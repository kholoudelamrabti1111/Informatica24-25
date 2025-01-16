/*Scrivi un programma che esegue il calcolo 
del fattoriale di un numero num inserito.
ES: 5! fatt=1*2*3*4*5
*/
#include <stdio.h>
int main(){
    int n, fatt=1;// si parte sempre da uno.
    printf("Inserisci un numero");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        fatt*=i;// fatt=fatt*i
    }
    printf("Il calcolo del fattoriale di %d vale %d", n, fatt);
}

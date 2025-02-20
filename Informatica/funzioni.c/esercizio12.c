/*Si scriva un programma in linguaggio  C che letto un numero intero
positivo dallo standard input, visualizzi a terminale il quadrato del 
numero stesso facendo uso soltanto di operazioni di somma.
Si osservi che il quadrato di ogni numero intero positivo N può essere
costruito sommando tra loro i primi N numeri dispari
ES: N=5; n2=1+3+5+7+9=25*/
#include <stdio.h>
int numero(int n);
int main(){
    int n;
    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);
    }while(n<=0);
    numero(n);

}
int numero(int n){
    int somma=0;
    if(n%2==1){
        somma+=n;
        
    }
}
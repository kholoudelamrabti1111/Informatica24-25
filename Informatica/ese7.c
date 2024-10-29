/*
*/

#include <stdio.h>
int main (){
    int num1;
    int num2;
    char operazione;
    float risultato;
    int flag=0;

    printf("Inserisdci il primo valore");
    scanf("%d", &num1);
    printf("Inserisdci il secondo valore");
    scanf("%d", &num2);
    printf("Quale operazione vuoi fare");
    scanf("%c", &operazione);

     switch(operazione){
        case 'm';
                risultato=num1*num2;
                break;
        case 'a';
                risultato=num1+num2;
                break;
        case 's';
                risultato=num1-num2;
                break;
        case 'd';
                risultato=num1/num2;
                break;
        
        default: printf("L'operazione scelta non è disponibile");
                flag=1;
        
     }

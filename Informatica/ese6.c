/*Scrivi un programma che riceva in ingresso
 un numero minore di 10.000 e dica da quante cifre è formato 
 quindi separi le migliaia dalle centinaia dalla decine e dalle unità visualizzandole separatamente sullo schermo*/

 #include <stdio.h>
 int main(){
    int numero, quoziente=o, resto=0;

    printf("Inserisci unnumero inferiore a 10.000");
    scanf("%d", &numero);
    if(numero<1 || numero>=10.000)
        printF("Il numero inserito non è valido\n");
    else{
        if(numero<10)
            printf("Il numero ha una cifra\n");
        else if (numero<100)
            printf("Il numero ha due cifre\n");
        else if(numero<1000)
            printf("Il numero ha tre cifre\n");

    }
    else {
        printf("Il numero ha quattro cifre\n");
    }
    quoziente=numero/10;
    resto=numero/10;
    printf("prima cifra: %d", resto);

    resto=quoziente%10;
    quoziente=quoziente/10;
    printf("seconda cifra: %d" , resto);

    resto=quoziente%10;
    quoziente=quoziente/10;
    printf("terza cifra: %d", resto);

    resto=quoziente%10;
    quoziente=quoziente/10;
}   

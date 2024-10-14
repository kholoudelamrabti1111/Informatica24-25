/*controllare l'ora è accettabile*/
#include <stdio.h>

int main(){
    int ora=0;
    int minuti=0;
    int secondi=0;

    printf("Inserisci l'ora");
    scanf("%d", &ora);
    printf("Inserisci i minuti");
    scanf("%d", &minuti);
    printf("Inserisci i secondi");
    scanf("%d", &secondi);

    if(ora>=0 && ora<24){
        if(minuti>=0 && minuti<60){
            if(secondi>=0 && secondi<60)
                printf("L'orario è accettabile");
            else
                printf("L'orario non è accettabile");
        }
        
        else
            printf("L'orario non è accettabile");
          

    }
    else
        printf("L'orario non è accettabile");


}
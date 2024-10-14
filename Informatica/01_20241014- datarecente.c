/*date due date espresse in g, m, a determinare la data più recente*/

#include <stdio.h>
int main(){

    int giorno=0;
    int mese=0;
    int anno=0;
    int bisestile=0;
    int giorno1=0;
    int mese1=0;
    int anno1=0;
    int bisestile1=0;


    printf("Inserisci il giorno");
    scanf("%d", &giorno);
    printf("Inserisci il mese");
    scanf("%d", &mese);
    printf("Inserisci l'anno");
    scanf("%d", &anno);

    if(anno %100==0){
        if(anno%400==0){
            printf("L'anno è bisestile");
            bisestile=1;
        }
    }
    else{
        if(anno%4==0){
            printf("L'anno è bisestile");
            bisestile=1;
        }
    }
    
    if(mese>=1 && mese<=12){
        if(mese==2){
            if(giorno>=1 && giorno<=28+bisestile){
                printf("La data è accettabile");
            }
            else{
                printf("\nLa data non è accettabile");
            }

        }else{
            if(mese==11 || mese==4 || mese==6 || mese==9 ){
                if(giorno>=1 && giorno<=30){
                    printf("\nLa data è accettabile");
                }
                else{
                    printf("\nLa data non è accettabile");
                }
            }
            else{
                if(giorno>=1 && giorno>=31){
                    printf("\nLa data è accettabile");
                }
                else{
                    printf("\nLa data non è accettabile");
                }
            }
        }


    }
    else{
        printf("\nLa data non è accettabile");
    }


    
    if(anno1 %100==0){
        if(anno1%400==0){
            printf("L'anno è bisestile");
            bisestile1=1;
        }
    }
    else{
        if(anno1%4==0){
            printf("L'anno1 è bisestile");
            bisestile1=1;
        }
    }
    
    if(mese1>=1 && mese1<=12){
        if(mese1==2){
            if(giorno1>=1 && giorno1<=28+bisestile1){
                printf("La data è accettabile");
            }
            else{
                printf("\nLa data non è accettabile");
            }

        }else{
            if(mese1==11 || mese1==4 || mese1==6 || mese1==9 ){
                if(giorno1>=1 && giorno1<=30){
                    printf("\nLa data è accettabile");
                }
                else{
                    printf("\nLa data non è accettabile");
                }
            }
            else{
                if(giorno1>=1 && giorno1>=31){
                    printf("\nLa data è accettabile");
                }
                else{
                    printf("\nLa data non è accettabile");
                }
            }
        }


    }
    else{
        printf("\nLa data non è accettabile");

        if(anno>anno1)
            printf("La prima data è più recente");
        else if(anno==anno1){
            if(mese>mese1)
                printf("La prima data è più recente");
            else if(mese==mese1){
                if(giorno>giorno1)
                    printf("La prima data è più recente");
                else if(giorno==giorno1)
                    printf("Le date sono uguali");
                else
                printf("La seconda data è più recente");

            }
            else
            printf("La seconda data è più recente");
            

        }
        else
            printf("La seconda data è più recente");
            


    
    }



}
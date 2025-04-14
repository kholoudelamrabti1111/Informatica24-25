/*Data una sequenza di valori (si termina non appena si inserisce -1) verificare se i divisori dei valori
cadono nell’intervallo [8,38].*/
#include <stdio.h>
int main(){
    int val, divisori=0;

    do{
        printf("Inserisci un valore: ");
        scanf("%d", val);
        if(val!=-1){
            printf("I divisori di %d sono:\n", val);
        }
    }while(val!=-1);
    for(int i=1; i<val; i++){
        divisori==i;
        if(divisori<=8 && divisori>=38){
            printf("Il numero %d\n: ", divisori);
        }
    }


}
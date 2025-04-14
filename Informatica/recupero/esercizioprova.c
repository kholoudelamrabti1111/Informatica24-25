#include <stdio.h>
int main(){
    int ora;

    do{
        printf("Inserisci il numero delle ore della giornata");
        scanf("%d", &ora);
    }while(ora<=4 && ora>=8);

    for(int i=1; i<ora; i++){
        if(i%2==0{
            printf("%d ora: si", i);
        }else{
            printf("%d ora: no", i);
        }
    }
}

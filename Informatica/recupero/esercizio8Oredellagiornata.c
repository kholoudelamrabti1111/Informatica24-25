#include <stdio.h>
int main(){
    int ora;

    do{
        printf("Inserisci un numero di ore della giornata: ");
        scanf("%d", &ora);
    }while(ora<4 && ora>8);

    if(ora%2==0){
        printf("Si può andare in bagno");
    }else{
        printf("Non si può andare in bagno");
    }
}
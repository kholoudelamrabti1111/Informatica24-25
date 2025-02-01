/**/
#include <stdio.h>
void numeriDispari(int _a, int _n);

int main(){
    int n, a;

    do{
        printf("Quanti numeri dispari vuoi inserire: ");
        scanf("%d", &n);
    }while(n<=0);

    
    do{
        printf("Inserisci un numero: ");
        scanf("%d", &a);
    }while(a<=0);

    numeriDispari(a, n);

}

void numeriDispari(int _a, int _n){
    int b, cnt=0;
    b=_a+1;
    printf("I numeri dispari sono: ");

    while(cnt<_n){
        if(b%2==0){
            b++;
        }else{
            printf("%d ", b);
            b++;
            cnt++;
        }
        
    }

}





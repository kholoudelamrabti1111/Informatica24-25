/*calcolare il quoziente fra due numeri applicando
il metodo delle sottrazioni successive*/

#include <stdio.h>
int main(){
    int num1; 
    int num2;
    int num3;
    int q;
    int cnt=0;

    do{
        printf("Inserisci il primo numero");
        scanf("%d", &num1);
    }while(num1<=0);
    do{
        printf("Inserisci il secondo numero");
        scanf("%d", &num2);
    }while(num2<=0);

    if(num1<num2)
        num3=num2;
        num2=num1;
        num1=num3;

    q=num1;
    while(q>num2){
        q-=num2;
        cnt++;
    }
    printf("Il valore è %d", cnt);

   
    


}
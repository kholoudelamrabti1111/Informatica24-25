/*DATO UN NUMERO A PIU' CIFRE
 STAMPARE LE CIFRE CHE COMPONGONO IL NUMERO*/

 #include <stdio.h>
 int main(){
     int num=0;
     int q, R,;

    printf("Inserisci un numero: ");    
    scanf("%d", &num);

    
    R=num%10;
    q=num/10;
    num=q;
    R=num%10;
    q=num/10;
    num=q;
    R=num%10;
    q=num/10;
    num=q;
    


   


 }
 
 
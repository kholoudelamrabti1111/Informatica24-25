/*data una stringa iniziale e il fattore di cifratura
creare la stringa cifrata 
*/

#include <stdio.h>
#include <stdlib.h>

typedef char* string;
int main(){
    string frase;
    int num;
    int lettera=0;

    int cifratura(int len, string frase, int num){
        for(int i=0; i<len; i++){
            if(frase[i]>=65 && frase[i]+ num <=90 || frase[i]>=97 && frase[i]+ num <=122){
                frase[i]+=num;
            }else if(frase[i]>=65 && frase[i]<=90 num+1){
                lettera=(frase[i]+num)-91
                frase[i]='a'+c;
            }else if(frase[i]>=97 && frase[i]<=122){
                lettera=(frase[i]+num)-123;
                frase[i]='A'+c;
            }
            
        }
    }

printf("Inserisci la parola:");
fgets(frase, len, lettera);
printf("Inserisci il numero:");
scanf("%d", &num);
}
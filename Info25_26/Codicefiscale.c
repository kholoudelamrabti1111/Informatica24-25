/*Il codice fiscale è un codice alfanumerico di 16 caratteri che serve per identificare in modo univoco ogni cittadino italiano.
È composto in questo modo:
1.CCC NNN YYMDD LLLL C
dove:
2.CCC → prime tre lettere del cognome, formate prendendo le consonanti (o le vocali, se le consonanti non bastano);
3.NNN → prime tre lettere del nome, con una regola simile a quella del cognome (ma se ci sono quattro consonanti, si prendono la 1ª, 3ª e 4ª);
4.YY → ultime due cifre dell’anno di nascita;
M → lettera che rappresenta il mese di nascita (A = gennaio, B = febbraio, C = marzo, D = aprile, E = maggio,
H = giugno, L = luglio, M = agosto, P = settembre, R = ottobre, S = novembre, T = dicembre);
5.DD → giorno di nascita (per le donne si aggiunge 40 al giorno);
6.LLLL → codice del comune di nascita (per questo esercizio useremo G186, che è il codice del comune di Ostiglia);
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*char *nome=NULL, *cognome=NULL, *mese=NULL;
    int  anno, giorno, lennome=0, lencognome=0, lenmese=0;
    char sesso, buffernome[20], buffercognome[20], buffermese[20];
    */
   char *str, *frase;
   int flag;
   char *str=(char)malloc(20 *sizeof(char)) || *frase=(char)malloc(20*sizoef(char));
   if(str==NULL || frase==NULL){
        printf("Errore");
        return 1;
   }

   printf("Inserisci il nome");
   fgets(frase, 20, stdin);
   int len=stlen(frase, str);
   for(int i=0; i<len; i++){
        if(frase[i]>='a' && <='z' || frase[i]>='A' && <='Z'){
            flag=0;
        }
   }

    for(int i<len; cnt!=3 ; i++){
        if(frase[i]!='a'&& frase[i]!='e' && frase[i]!='i' && frase[i]!='o' && frase[i]!='u' && frase[i]!='A' && frase[i]!='E' && frase[i]!='I' && frase[i]!='O' && frase[i]!='U'){
        str[cnt++]=frase[i];
        }
    }
    for(int i<len; cnt<3; i++){
        if(frase[i]=='a' && frase[i]=='e'&& frase[i]=='i' && frase[i]=='o' && frase[i]=='u' && frase[i]=='A' && frase[i]=='E' && frase[i]=='I' && frase[i]=='O'&& frase[i]=='U' &&){
        str[cnt++]=frase[i];
        }
    }
    
   
    

    //nome
    printf("Inserisci il nome: ");
    fgets(buffernome, sizeof(buffernome), stdin);

    lennome=strlen(buffernome);
    nome=(stringa)malloc((lennome+1)*sizeof (char));
    strcpy(nome,buffernome);

    //cognome
    printf("Inserisci il cognome: ");
    fgets(buffercognome, sizeof(buffercognome)stdin);

    lencognome=strlen(buffercognome);
    cognome=(stringa)malloc((lencognome+1)*sizeof (char));
    strcpy(cognome,buffercognome);

    //mese
    printf("Inserisci il mese: ");
    fgets(buffermese, sizeof(buffermese)stdin);

    lenmese=strlen(buffermese);
    mese=(stringa)malloc((lenmese+1)*sizeof (char));
    strcpy(mese,buffermese );

    //anno
    printf("Inserisci l'anno: ");
    fgets("%d", &anno);

    //giorno
    printf("Inserisci il giorno: ");
    fgets("%d", &giorno);


    char str=(char)realloc(16 * sizeof(char));
    if(str==NULL){
        printf("Errore di allocazione memoria!");
        return 1;
    }

    while(nome!= '\0'){
        if(nome!='a' && nome!='e' && nome!= 'i' && nome!= 'o' && nome!='u' && nome!='A' && nome!='E' && nome!= 'I' && nome!= 'O' && nome!='U'){
             flag=0;
        }else{
            flag=1;
        }

    }

    
}
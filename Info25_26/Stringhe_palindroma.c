/*Verificare se una stringa è palindroma
Es: anna palindroma 
    ciao non è palindroma
*/

#include <stdio.h>
#include <stdlib.h>

typedef char* String;
int lunghezza(String s){
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    return 1;
}
int Palindroma(String s, int dim){
    int flag=0, i, j;
    for(i=0, j=dim-1; i<dim/2; i++, j--){
        /*I inizia e parte da zero e j=dim-1 vuol dire
        ad esempio ciao sono da 0 a 3, in i<dim/2 vuol dire
        quando sono arrivata a metà della parola,
        I aumenta e J dicrementa.
        */
        if(s[i]!=s[j])
            flag=1;
    }
    return flag;
}


int main(){
    int dim=0, palindroma=0;
    String s = (String)malloc(50*sizeof(char));
    if(s==NULL) return 1;

    printf("Inserisci una stringa: ");
    fgets(s, 50, stdin);
    printf("\n%s", s);
    dim = lunghezza(s);
    printf("\n%d", dim);
    palindroma=Palindroma(s,dim);
    if(palindroma==1)
        printf("\nLa frase non è palindroma");
    else
        printf("\nLa frase è palindroma");  
}
/*data una stringa trova la sottostringa*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* string;

int Stringa(string s2, string s1){
    int flag=0, cnt=0;
    int dim1, dim2;
     for(int i=0; i<dim1-dim2; i++){
        if(s1[i]==s2[0]){
            for(int j=1; j<dim2; j++){
                if(s1[i+j]!=s2[j]){
                    flag=1;
                }
                printf("%d", cnt);
            }
            cnt+=flag;    
        }   
    }  
}

int main(){
    string s1;
    string s2;
    int dim;
    int dim2;
    int flag;

    string s1=(string)malloc(20*sizeof(char));
    if(s1==NULL){
        printf("Errore");
        return 1;
    }

    string s2=(string)malloc(20*sizeof(char));
    if(s2==NULL){
        printf("Errore");
        return 1;
    }

    printf("Inserisci la prima stringa: ");
    fgets(s1, 20, stdin);
    printf("Inserisci la seconda stringa: ");
    fgets(s2, 20, stdin);
    Stringa(s1, strlen(s2));
    printf("La stringa %s si trova nella sottostringa %s", s1, s2);

}
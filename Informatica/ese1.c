#inlude <stdio.h>
int main(){

int alunni,sconto,costo;    
    printf("Inserisci il numero di alunni");
    scanf("%d",&alunni);
    sconto=(12/100*50);
    costo=(12*alunni)+sconto;
    printf("Il costo sostenuto dalla scolaresca per andare a teatro è di %d:", costo);


}
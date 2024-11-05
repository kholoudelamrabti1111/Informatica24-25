/*Scrivi un programma in C che permetta di inserire 1 voto di uno studente.
Poi genera casualmente un secondo voto compreso tra 4 e 8.
Quindi permetta di scegliere quale operazione fare tra:
- 1 mostrare la media dei due voti
- 2 mostrare il voto maggiore tra i due
- 3 mostrare il voto minore tra i due.
- 4 mostrare il numero di voti sufficiente tra i due.
Verificare che il voto inserito sia compreso tra 2 e 10.*/

#include <stdio.h>
#include <stdli.h>
#include <time.h>

int main(){
    float voto1;
    float voto2;
    int scelta;
    printf("Inserisci il primo voto");
    scanf("%f", &voto1);
    srand(time(NULL));
    voto2=rand()%5+4;
    printf("Il voto casuale è %f", voto2);
    printf("Scegli un'operazione - 1 mostrare la media dei due voti - 2 mostrare il voto maggiore tra i due - 3 mostrare il voto minore tra i due - 4 mostrare il numero di voti sufficiente tra i due. ")
    scanf("%f", &scelta);
    switch(scelta){
        case 1:
               
    }

}
/*  Scrivi un programma che chieda all'utente un numero di studenti e per ogni studente un numero di voti*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int **mat=NULL;
    int righe_studenti=0;
    int num_voti=0;

    printf("Quanti studenti devi valutare: ");
    scanf("%d", &righe_studenti);

    mat=(int**)malloc(righe_studenti* sizeof(int*));
    for(int i=0; i<righe_studenti; i++){
        printf("Quanti voti ha lo studente?");
        scanf("%d", &num_voti[i]);

        mat[i]=(int*)malloc(num_voti* sizeof(int));
        for(int j=0; j<num_voti; j++){
            printf("Inserisci il voto dello studente: ");
            scanf("%f", &mat[i][j]);
        }
    }
    mat(int**)realloc(mat(righe_studenti+1)* sizeof(int *));
    mat[righe_studenti]=malloc(5* sizeof(int));
    for(int i=0; i<righe_studenti; i++){
        free(mat[i]);
    }
    free(mat);
}
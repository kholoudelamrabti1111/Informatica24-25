/*Date le informazioni di alcuni studenti

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Studente {
    char cognome[20];
    char nome[20];
    char classe[3];
    int matricola;
    int n_certif;
};

struct certificazione {
    int matricola;
    struct esame{
        char corso[30];
        int livello;
    }esame;
};

int main(){
    struct Studente *studenti;
    struct certificazione *certificazioni;
    int n=3;
    int num, c_max, i_max;//matricola dello studente


    //allochiamo i primi 3 elementi
    studenti = (struct Studente*)malloc(n * sizeof(struct Studente));
    certificazioni = (struct certificazione*)malloc(n * sizeof(struct certificazione));

    if(studenti == NULL){
        printf("Errore di allocazione");
        return 1;
    }

    if(certificazioni == NULL){
        printf("Errore di allocazione");
        return 1;
    }

    //inseriamo i dati degli studenti
    strcpy(studenti[0].cognome, "Rossi");
    strcpy(studenti[0].nome, "Roberto");
    strcpy(studenti[0].classe, "4I");
    studenti[0].matricola = 123;
    studenti[0].n_certif = 0;

    strcpy(studenti[1].cognome, "Verdi");
    strcpy(studenti[1].nome, "Carlo");
    strcpy(studenti[1].classe, "3IA");
    studenti[1].matricola = 456;
    studenti[1].n_certif = 0;

    strcpy(studenti[2].cognome, "Gialli");
    strcpy(studenti[2].nome, "Sofia");
    strcpy(studenti[2].classe, "3I");
    studenti[2].matricola = 789;
    studenti[2].n_certif = 0;

    //inseriamo i dati riguardanti le certificazioni

    certificazioni[0].matricola = 123;
    strcpy(certificazioni[0].esame.corso, "inglese");
    certificazioni[0].esame.livello  = 2;

    certificazioni[1].matricola = 456;
    strcpy(certificazioni[1].esame.corso, "italiano");
    certificazioni[1].esame.livello  = 3;

    certificazioni[2].matricola = 789;
    strcpy(certificazioni[2].esame.corso, "tedesco");
    certificazioni[2].esame.livello  = 1 ;

    //visualizziamo i dati degli studenti
        printf("===Lista Studenti===\n");
        for(int i=0; i<n; i++){
        printf("Studente: %d:\n", i+1);
        printf("Cognome: %s:\n", studenti[i].cognome);
        printf("Nome: %s:\n", studenti[i].nome);
        printf("Classe: %s:\n", studenti[i].classe);
        printf("Matricola: %d:\n\n", studenti[i].matricola);
        printf("Numero certificazioni: %d:\n\n", studenti[i].n_certif);
        }

        //visualizziamo le informazioni riguardo le certificazioni
        printf("===Lista Certificazioni===\n");
        for(int i=0; i<n; i++){
        printf("Studente: %d:\n", i+1);
        printf("Corso: %s:\n", certificazioni[i].esame.corso);
        printf("Matricola: %d:\n\n", certificazioni[i].matricola);
        printf("livello certificazioni: %d:\n\n", certificazioni[i].esame.livello);
    }

    //calcoliamo il numero delle certificazioni di ogni studente
    for(int i=0; i<n; i++){
        num = studenti[i].matricola;
        for(int j=0; j<n; j++){
            if(certificazioni[j].matricola == num){
                studenti[i].n_certif += 1;
            }
        }
    }

    //visualizziamo i dati degli studenti
    printf("===Lista Studenti===\n");
    for(int i=0; i<n; i++){
        printf("Studente: %d:\n", i+1);
        printf("Cognome: %s:\n", studenti[i].cognome);
        printf("Nome: %s:\n", studenti[i].nome);
        printf("Classe: %s:\n", studenti[i].classe);
        printf("Matricola: %d:\n\n", studenti[i].matricola);
        printf("Numero certificazioni: %d:\n\n", studenti[i].n_certif);
    }

    //calcoliamo lo studente con il numeo di certificazioni massimo
    c_max = studenti[0].n_certif;
    i_max = 0;
    for(int i=0; i<n; i++){
        if(studenti[i].n_certif >c_max){
            c_max = studenti[i].n_certif;
            i_max = i;
        }
    }
    printf("Lo studente con il maggior numero di certificazioni è: %s %s", studenti[i_max].cognome, studenti[i_max].nome);
    free(studenti);
    free(certificazioni);
}
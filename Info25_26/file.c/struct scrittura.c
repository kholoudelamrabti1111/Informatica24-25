#include <stdio.h>

typedef struct Persona{
    char nome[20];
    int eta;
    char cognome[20];
}Persona;


int main(){
	FILE *file = fopen("dati.txt", "w");
	char riga[100];
	
	if(file==NULL){
		printf("Errore apertura file\n");
		return 1;
	}
	fprintf(file, "%s %d %s", "Maria", 12, "Rossi");
	fclose(file);
	return 0;
}
#include <stdio.h>

int main(){
	FILE *file = fopen("dati.txt", "r");
	
	if(file==NULL){
		printf("Errore apertura file\n");
		return 1;
	}
    fscanf(file, "%s %d %s", nome, &eta, cognome);
	
	printf("Nome: %s Eta: %d Cognome: %s", nome, eta, cognome);
    fclose(file);
	return 0;
}

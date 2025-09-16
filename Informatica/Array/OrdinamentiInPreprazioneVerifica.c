
  void bubbleSort(int vett[], int dim){

    int temp, flag=0, i=0;
    while(flag==0){
        flag=1; //vettore già ordinato
        for(int j=0; j<dim-1-i; j++){
            if(vettore[j] > vett[j+1]){
                flag=0;
                temp=vett[j];
                vett[j]=vett[j+1];
                vett[j+1]=temp;
            }
        }
        i++;

    }
}

void SelectionSort(int vett[], int dim){
    int min=0, temp=0;
    for(int i=0; i<dim; i++){
        min=i;
        for(int j=i+1; j<dim; j++){
            if(vett[j] < vett[min]){
                min=j;
            }
        }
    }
    temp=vett[min];
    vett[min]=vett[i];
    vett[i]=temp;
}

void QuickSort(int v[], int dim, int inizio, int fine){
    int i, j, pivot;
    if(inizio < fine){
        pivot=inizio;
        i=inizio;
        j=fine;

        while(i<j){
            while(v[i]< v[pivot] && i<fine)
                i++;
            while(v[j] > v[pivot])
                j--;
            if(i<j){
                scambia(&v[i], &v[j]);
            }

        }
        
        scambia(&v[pivot], &v[j]);
        quicksort(v, dim, inizio, j-1);
        quicksort(v, dim, j+1, fine);
    }

}

int ricercaSequenziale(int *vettore, int dim, int valore){
    for(int i=0; i<dim; i++){
        if(vettore[i]==valore){
            return i;
        }
    }
    return -1;
}

int ricercaBinaria(int vettore[], int dim, int estInf, int estSup, int valore){
    int media = (estSup+estInf)/2;
    if(estInf > estSup)
        return -1;
    if(vettore[media]== valore)
        return media;
    if(vettore[media] > valore)
        return ricercaBinaria( vettore,dim, estInf, media-1, valore);
    else 
        return ricercaBinaria( vettore,dim, media+1, estSup, valore);
}
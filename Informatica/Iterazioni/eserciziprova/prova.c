#include <stdio.h>
int main(){
    for(int i=0; i<6; i++){
        for(int j=0; j<11; j++){
            if(j==i || j==10-i){
                printf("*");
            
            }
            else{
                printf(" ");
            }

        }
        printf("\n");

    }
}
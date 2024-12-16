/**/

#include <stdio.h>
int main(){
    int i=0;
    
    for(int i=0; i<7; i++);{
        for(int j=0; j<11; j++){
            if(i==0 || j==5){
                printf("*");
            }else 
                printf(" ");
        }
        printf("\n");
    }
}
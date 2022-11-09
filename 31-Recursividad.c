#include <stdio.h>

int forRecursivo(int);

int main(){
    int i;

    /*for(i=0;i<10;i++){
        printf("%d ",i);
    }*/

    forRecursivo(0);

    return 0;
}

int forRecursivo(int i){
    // caso base
    if(i==10){
        return 0;
    }else{
        printf("%d ",i);
        forRecursivo(i+1);
    }

}

#include <stdlib.h>
#include <stdio.h>

int main (){
    int i;
    int * A = (int *) calloc(10,sizeof(int));

    for(i = 0; i<10;i++){
        A[i] = i+1;
    }

    for(i = 0; i<10;i++){
        printf(" %d ",A[i]);
    }

    free(A);
    return 0;
}

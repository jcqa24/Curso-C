#include <stdio.h>

int main(){
    int A[] = {2,5,8,3,8,1,9};
    int pos = -1,tam,i,dato;

    tam = sizeof(A)/sizeof(A[0]);

    dato = 18;

    //--------
    for(i=0;i<tam;i++){
        if(dato == A[i]){
            pos = i+1;
            printf("El elemento se encontro en la posicion %d\n",pos);
            //break;
        }
    }
    //-------

    if(pos == -1){
        printf("El elemento no esta en el arreglo");
    }
    return 0;
}



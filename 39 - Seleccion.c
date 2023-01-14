#include <stdio.h>

void imprimir(int A[], int tam);

int main(){
    int A [] = {4,2,3,5,1,4,5,6,1,124,65};
    int tam = sizeof(A)/sizeof(A[0]);

    int menor, aux, i,j;

    printf("Arreglo en desorden: ");
    imprimir(A,tam);

    //inicio seleccion
    for(i=0; i<tam-1; i++){
        menor = i;
        for(j=i;j<tam;j++){
            if(A[j] < A[menor]){
                menor = j;
            }
        }

        aux = A[i];
        A[i] = A[menor];
        A[menor] = aux;
    }
    //fin seleccion

    printf("Arreglo en orden: ");
    imprimir(A,tam);

    return 0;
}


void imprimir(int A[], int tam){
    int i;
    for(i=0;i<tam;i++){
        printf(" %d ",A[i]);
    }
    printf("\n");
}

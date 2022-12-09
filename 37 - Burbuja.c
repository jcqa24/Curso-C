#include <stdio.h>

void imprimir(int A[], int tam);

int main(){
    int A[] = {10,26,5,1,7};

    int tam = sizeof(A)/sizeof(A[0]);
    int i,j,tem;

    printf("Arreglo desordenado: ");
    imprimir(A,tam);

    // burbuja
    for(i=0;i<tam;i++){
        for(j=0;j<tam-1;j++){
            if(A[j]>A[j+1]){
                tem = A[j];
                A[j] = A[j+1];
                A[j+1]=tem;
            }
            imprimir(A,tam);
            printf("\n");
        }
    }
    // fin burbuja

    printf("Arreglo ordenado: ");
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

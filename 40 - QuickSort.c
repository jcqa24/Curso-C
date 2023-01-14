#include <stdio.h>

void imprimir(int A[], int tam);

void qs(int array [],int inicio, int fin){
    int izq,der,pivote,aux;
    izq = inicio;
    der = fin;
    pivote = array[(izq+der)/2];

    do{
        while(array[izq] < pivote && izq<fin){
            izq++;
        }

        while(array[der] > pivote && der > inicio){
            der --;
        }

        if(izq <= der){
            aux = array[izq];
            array[izq] = array[der];
            array[der] = aux;
            izq++;
            der--;
        }

    }while(izq <= der);

    if(inicio <= der){
        qs(array,inicio,der);
    }

    if(fin > izq){
        qs(array,izq,fin);
    }

}


int main(){

    int array [] = {7,2,1,6,4,5,3,8};
    int tam = sizeof(array)/sizeof(array[0]);

    printf("Arreglo en desorden: ");
    imprimir(array,tam);

    qs(array,0,tam-1);

    printf("Arreglo en orden: ");
    imprimir(array,tam);


    return 0;
}

void imprimir(int A[], int tam){
    int i;
    for(i=0;i<tam;i++){
        printf(" %d ",A[i]);
    }
    printf("\n");
}

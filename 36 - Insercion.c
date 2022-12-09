#include <stdio.h>

void insercion(int [],int);

int main(){
    int i;
    int tam;

    int A[] = {6,3,87,2,7,9,3,10};
    tam = sizeof(A)/sizeof(A[0]);

    printf("El arreglo desordenado : ");

    for(i=0;i<tam;i++){
        printf(" %d",A[i]);
    }

    insercion(A,tam);

    printf("\nEl arreglo desordenado : ");

    for(i=0;i<tam;i++){
        printf(" %d",A[i]);
    }

    printf("\n");

}

void insercion(int A [],int tam){
    int i,j,index;
    for(i=1; i< tam; i++){
        index = A[i];
        j=i-1;
        while(j>=0 && A[j] > index){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = index;
    }

}


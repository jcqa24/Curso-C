#include <stdio.h>

void imprimir(int A[], int tam);

int main(){
    int A[]={5,2,4,1,3};
    int tam = sizeof(A)/sizeof(A[0]);
    int inicio = 0;
    int fin = tam-1;
    int i,aux,c=0;
    int nindice,nfin,ninicio;

    printf("Arreglo desordenado");
    imprimir(A,tam);

    //burbuja bidireccional

    while(inicio <= fin){
        for(i=0;i<fin;i++){
            if(A[i] >A[i+1]){
                aux = A[i];
                A[i] = A[i+1];
                A[i+1] = aux;
                c++;
                nfin = i;
            }
        }

        if( c == 0){
            break;
        }
        fin = nfin;
        c = 0;

        for(i=fin;i>inicio;i--){
            if(A[i] >A[i+1]){
                aux = A[i];
                A[i] = A[i+1];
                A[i+1] = aux;
                c++;
                ninicio = i;
            }
        }

        if(c==0){
            break;
        }
        inicio = ninicio +1;
        c=0;

    }

    // Fin burbuja bidireccional

    printf("Arreglo ordenado");
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

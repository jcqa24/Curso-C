#include <stdio.h>

void imprimir(int A[], int tam){
    int i;
    for(i=0;i<tam;i++){
        printf(" %d ",A[i]);
    }
    printf("\n");
}

void shellSort(int A[], int tam){
    int paso,i,j,temp;

    paso = tam/2;

    while(paso >0){

        for(i=paso; i<tam;i++){
            temp = A[i];
            for(j=i;j>=paso;j-=paso){
                if(A[j-paso] > temp){
                    A[j]=A[j-paso];
                }else{
                    break;
                }
            }
            A[j] = temp;
        }

        paso = paso/2;
    }

}


int main(){

    int A [] = {5,4,1,2,3,8,9,7};
    int tam = sizeof(A)/sizeof(A[0]);

    printf("Arreglo en desorden: ");
    imprimir(A,tam);

    shellSort(A,tam);

    printf("Arreglo en orden: ");
    imprimir(A,tam);

    return 0;
}

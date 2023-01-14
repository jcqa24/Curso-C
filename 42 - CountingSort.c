#include <stdio.h>

void imprimir(int A[], int tam){
    int i;
    for(i=0;i<tam;i++){
        printf(" %d ",A[i]);
    }
    printf("\n");
}


int busMax(int A[], int tam){
    int max = A[0];
    int i;
    for(i=1;i<tam;i++){
        if(A[i] > max){
            max = A[i];
        }
    }
    return max;
}

void countigSort(int A[], int tam){
    int max = busMax(A,tam);
    int out[tam];
    int count[max+1];
    int num,nindex;
    int i;

    for(i=0; i<=max;i++){
        count[i] = 0;
    }

    for(i=0; i< tam;i++){
        num = A[i];
        count[num]++;
    }

    for(i=1;i<=max;i++){
        count[i] += count[i-1];
    }

    for(i=0;i<tam;i++){
        num = A[i];
        nindex = count[num] - 1;
        out[nindex] = num;
        count[num]--;
    }

    for(i=0;i<tam;i++){
        A[i] = out[i];
    }


}

int main(){

    int A [] = {8,10,3,1,3,5,7,3,5,2};
    int tam = sizeof(A)/sizeof(A[0]);

    printf("Arreglo en desorden: ");
    imprimir(A,tam);

    countigSort(A,tam);

    printf("Arreglo en orden: ");
    imprimir(A,tam);

    return 0;
}

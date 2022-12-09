#include <stdio.h>

int busquedaBinaria(int [],int,int,int);

int main(){

    int A[] = {1,2,3,4,5,6,7,8,9,10};
    int tam = sizeof(A)/sizeof(A[0]);
    int pos = busquedaBinaria(A,15,0,tam-1);

    if(pos == -1){
        printf("El dato no esta en el arreglo\n");
    }else{
        printf("El dato se encuentra en la posicion %d\n",pos);
    }


    return 0;
}


int busquedaBinaria(int A[],int dato,int inicio,int fin){
    int mitad = (inicio + fin)/2;

    // Caso base
    if(A[mitad] == dato){
        return mitad+1;
    }
    if(inicio > fin){
        return -1;
    }

    // Caso general
    if(dato < A[mitad]){
        return busquedaBinaria(A,dato,inicio,mitad-1);
    }else{
        return busquedaBinaria(A,dato,mitad+1,fin);
    }
}

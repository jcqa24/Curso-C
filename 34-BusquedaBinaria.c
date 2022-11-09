#include<stdio.h>

int busquedaBinaria(int a[], int dato, int inicio, int fin);

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int tam = sizeof(a)/sizeof(a[0]);

    int pos = busquedaBinaria(a,11,0,tam-1);

    if(pos != -1){
        printf("El dato se encuentra en la posicion %d \n",pos);
    }else{
        printf("El dato no se encuentra en el arreglo\n");
    }

    return 0;
}

int busquedaBinaria(int a[], int dato, int inicio, int fin){
    int mid;

    while(inicio <= fin){
        mid = (inicio + fin) / 2;
        if(a[mid] == dato){
            return mid+1;
        }else if(dato < a[mid]){
            fin = mid -1;
        }else{
            inicio = mid + 1;
        }

    }
    return -1;

}

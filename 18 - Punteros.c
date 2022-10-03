#include <stdio.h>

void Cambiar(int *);

int main(){

    // variable normal int

    int a = 20;

    // puntero a int -> *

    //int * pa;

    // obtener direccion de memoria -> &

    //pa  = &a;

    printf("Valor original %d\n",a);
    Cambiar(&a);
    printf("Valor cambiado %d",a);



    return 0;
}

void Cambiar(int * pb){
    * pb = 100;
}

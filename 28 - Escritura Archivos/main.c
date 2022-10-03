#include <stdio.h>

int main(){

    FILE * file;

    // w -> borra el contenido del archivo
    // a -> conserva el contenido del archivo

    file = fopen("datos.dat","a");

    if(file == NULL){
        printf("Error al abrir el archivo");
        return 1;
    }

    fprintf(file,"\nOtra cadena %d",12);


    return 0;
}

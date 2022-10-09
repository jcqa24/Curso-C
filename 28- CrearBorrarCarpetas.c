#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>


int main(){

    rmdir("temp");

    /*if( mkdir("temp",0755) == 0){
        printf("Carpeta creada con exito");
    }else{
        printf("Error al crear la carpeta");
    }*/

    return 0;
}

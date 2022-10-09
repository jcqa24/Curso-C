#include <stdio.h>
#include <dirent.h>

int main()
{
    DIR * folder;
    struct dirent * directorio;
    int n = 0;

    // . -> mismo directorio
    // .. -> directorio padre
    folder = opendir(".");
    if(folder == NULL){
        printf("Error al abrir la carpeta");
        return 1;
    }

    while((directorio = readdir(folder))){
        printf("%s\n",directorio->d_name);
        n++;
    }

    printf("El numero de elementos dentro de la carpeta es %d\n",n-2);

    return(0);
}

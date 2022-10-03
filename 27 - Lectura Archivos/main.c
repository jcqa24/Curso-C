#include <stdio.h>


int main(){
    FILE *file;
    char c;

    file = fopen("datos.dat","r");

    if(file != NULL){
        printf("\n\t\t Contenido del archivo \n\n");
        while(!feof(file)){
           c = fgetc(file);
           if(c == "\n"){
            contador++;
           }
           printf("%c",c);
        }
    }else{
        printf("Error al abrir el archivo");
    }

   return 0;
}

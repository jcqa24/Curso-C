#include <stdio.h>
#include <stdlib.h>

void main(){


int res=1, n = 0;

while(res == 1){
    n = rand()%11;
    printf("El numero generado es: %d\n",n);
    printf("Deseas generar otro numero 1-si / 2 -no");
    scanf("%d",&res);
}

printf("Adios !!! \n");

}

#include <stdio.h>


void main(){
    int suma,a,b,res = 2;

    do{
        printf("Ingresa el primer numero\n");
        scanf("%d",&a);
        printf("Ingresa el segundo numero\n");
        scanf("%d",&b);
        printf("El resultado de la suma es: %d", a+b);

        printf("Deseas realizar otra suma 1-si / 2-no");
        scanf("%d",&res);
    }while(res != 2);
}

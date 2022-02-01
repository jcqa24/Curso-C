/**
* Author : JCQA
*  Date : 01/2022
*   Description : Tipos de datos basicos y hola mundo
*/


#include <stdio.h>


int main(){

    printf("Hola\n");
    printf("Mundo\n");


    //constante
    #define pi 3.1416



    //Enteros  %d
    int A ;
    short d;
    long e;
    //Decimales %f
    float b;
    double c;

    //Caracteres %c
    char f = 'A';

    b = (float)9/5;

    printf("ingresa un numero decimal: ");
    scanf("%d",&A);

    printf("\nIngresaste el numero %d \n",A);


    float area = 1 * pi  * pi;

}

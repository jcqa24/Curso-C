#include <stdio.h>

int main(){



    //bandera
    int flag = 0;

    // Simbolos de relacion
    // Verdaderos o Falsos
    // < menor q
    // > mayor q
    // == igual
    // <= menor o igual
    // >= mayor o igual
    // != Diferente

    // Operadores logicos
    // && and Y  -> Las dos condiciones deben ser veraderas para verdadero
    // || or o -> Almenos una condicion debe ser verdadera para verdadero
    // ! Negacion -> Verdareo = Falso y Falso = verdadero

    int mes;
    int dia;

    /*if (edad >= 18){
        printf("Eres mayor de edad");
    }else if(edad <= 12) {
        printf("Eres un niño");
    }else{
        printf("Eres joven");
    }*/

    mes  = 7;

    if( (mes > 0) && (mes <=12) ){

    }else{
        printf("El mes no es valido");
    }
/*
    switch (mes){

        case 1:
            if( dia <= 19){
                printf("picis")
            }else{
                printf("Aries")
            }
        break;
        case 2:
            if(dia> 28){
                printf("Febrero solo tiene 28 dias");
            }else if(dia <=19){
                printf("Virgo");
            }

        default :
            printf("Edad no valida");

    }*/

    return 0;
}

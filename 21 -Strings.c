#include <stdio.h>
#include <string.h>

int main () {
    char s1[12] = "mundo";
    char s2[12] = "Mundo";
    char s3[12];
    int len;


    //copia un string a otro string
    strcpy(s3,s2);

    // concatenar dos string
    //strcat(s1,s2);

    // tamaño del string
    len = strlen(s2);

    // compara 2 string

    if(strcmp(s1,s2) == 0){
        printf("Las cadenas son iguales");
    }else{
        printf("Las cadenas son diferentes");
    }




return 0;
}

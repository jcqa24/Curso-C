#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char s1[100];
    char command [100] = "yay -S ";

    printf("Ingresa el nombre del paquete que quieres instalar: ");
    scanf("%s",s1);


    // yay -S kate
    strcat(command,s1);

    system(command);

    return 0;
}

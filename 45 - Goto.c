#include <stdio.h>

int main(){
int c = 1;

/*retorno:
    printf("Mensaje 1\n");
goto jump;
    printf("Mensaje 2\n");

jump:
    printf("Mensaje 3\n");
    printf("Mensaje 4\n");
    printf("Mensaje 5\n");
    c++;
    if(c == 5){
        goto fin;
    }
goto retorno;

fin:
    printf("Salida\n");
*/
    int i, numero =6;

    for(i=2; i<numero; i++){
        if(numero % i == 0){
            goto noprimo;
        }
    }

    printf("El numero es primo\n");
    goto fin;

noprimo:
    printf("El numero no es primo\n");

fin:
    printf("");

   return 0;
}

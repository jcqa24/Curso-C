#include <stdio.h>
int cambio(int);



int main(){
    int a = 10;
    printf("Valor original %d \n",a);
    a = cambio(a);
    printf("Valor modificado %d \n",a);
    return 0;
}

int cambio(int a){
    a = 200;
    return a;
}


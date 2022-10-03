#include <stdio.h>


typedef int entero;
typedef char Palo[7];

int main(){

    entero n1 = 10;
    Palo p[4] = {"oros","espadas","copas","bastos"};
    printf("%d\n",n1);

    printf("%s",p[0]);


    return 0;
}

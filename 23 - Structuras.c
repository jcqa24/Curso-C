#include <stdio.h>
#include <stdlib.h>

struct S_alumno{
    int id;
    float * calificaciones;
};
typedef struct S_alumno alumno;

int main(){
    int na = 3,nc=4,i,j;

    alumno * AA = (alumno *) malloc(na*sizeof(alumno));

    for(i=0;i<na;i++){

        AA[i].calificaciones = (float *) malloc(nc*sizeof(float));
    }

    AA[0].id = 1;
    AA[0].calificaciones[0] = 8.5;
    AA[0].calificaciones[1] = 6.5;
    AA[0].calificaciones[2] = 7.5;
     AA[0].calificaciones[3] = 5.5;

    AA[1].id = 2;
    AA[1].calificaciones[0] = 8;
    AA[1].calificaciones[1] = 6;
    AA[1].calificaciones[2] = 7;
    AA[1].calificaciones[3] = 5;


    AA[2].id = 3;
    AA[2].calificaciones[0] = 8.5;
    AA[2].calificaciones[1] = 6.5;
    AA[2].calificaciones[2] = 7.5;
    AA[2].calificaciones[3] = 9.5;

    for(i=0;i<na;i++){
        printf("ID Alumno: %d \n",AA[i].id);
        printf("Calificaciones: \n");
        for(j=0;j<nc;j++){
            printf("Calificacion %d : %.2f\n",j+1,AA[i].calificaciones[j]);
        }

        printf("\n ******************************* \n");

    }

    return 0;
}

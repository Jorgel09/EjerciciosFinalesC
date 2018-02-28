#include <stdio.h>
#include <stdlib.h>

int main (){

    int x,y,z,aux;
    //sumat: suma de las toneladas
    //sumak: suma de la velocidad
    int sumak=0,sumat=0;
    int w,s;


    printf("Ingresa el peso maximo que resiste el puente-Longitud-Numeros de vehiculos que lo atraviesan\n");
    scanf("%d %d %d",&x,&y,&z);

    for (int i=0; i<z; i++)
        {
            scanf("%d-%d",&w,&s);
            sumak=sumak+s;
           // printf("%d\n",sumak);
            sumat=sumat+w;
        }

    if(sumat>x)
        printf("No es posible que el convoy completo atraviese el puente");
    else
    {
        printf("El recorrido se hace en %d minutos",(sumak/y)*60);
    }


    return EXIT_SUCCESS;
}
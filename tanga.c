#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main (){

    int suma=0;
    int a,aux;

        
        
        printf("Cuantos caracteres tiene el numero:");
        scanf("%d",&a);
        char cadena[a];
        
        printf("Ingresa la cadena:\n");
        scanf("%s", cadena);
    
        aux=a;
        for(int i=0; i<aux; i++)
        {
            if(cadena[i]=='%')
                {
                    suma=suma+(0*cadena[i]);
                }
            else if(cadena[i]==')')
                {
                    suma=suma+(1*pow(6,a-1));
                }
            else if(cadena[i]=='l')
                {
                    suma=suma+(2*pow(6,a-1));
                }
            else if(cadena[i]=='@')
                {
                    suma=suma+(3*pow(6,a-1));
                }
            else if(cadena[i]=='?')
                {
                    suma=suma+(4*pow(6,a-1));
                }
            else if(cadena[i]=='/')
                {
                    suma=suma+(5*pow(6,a-1));
                }
            else if(cadena[i]=='$')
                {
                    suma=suma-(1*pow(6,a-1));
                }
        
        a--;
        
        }
        
        printf("\nEl primer resultado es:%d",suma);

    
}
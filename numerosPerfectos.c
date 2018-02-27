#include <stdio.h>
#include <stdlib.h>

int main (){

    int rep,cont=0,sup,inf,suma=0,mul=0,aux=0;

    printf("Introduce el numero de veces que quieres repetir el programa:");
    scanf("%d",&rep);

 do{

    printf("Introduce los numeros que quiere evaluar:");
    scanf("%d %d",&inf,&sup);


    
    for(int i=inf;i<=sup;i++)
    { 
        suma=0;
        aux=inf;

        for(int j=1; j<=(aux/2);j++)
        {
            mul=aux%j;
            if(mul==0){
                suma+=j;
            }
        
        }
        if(inf==suma)
            printf("%d es perfecto\n",aux);
        else    
            printf("%d no es perfecto\n",aux);
    inf++;
    }
    cont++;
}while(cont<rep);

    return EXIT_SUCCESS;
}
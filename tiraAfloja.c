#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int x,n,cont,sumame=0,sumama=0,sumat=0,aux2=0;
    float aux=0,parte1=0,parte2=0;

    printf("Introduce el numero de casos a probar:");
    scanf("%d",&x);

    do{
        printf("Cuantas personas estan en el picnic?:");
        scanf("%d",&n);
        while(n>100)
            {
                printf("Introduce un nuevo valor para los integrantes del picnic:");
                scanf("%d",&n);
            }
        int p[n];
        puts("");
        printf("Introduce los pesos de las personas\n");

        for(int i=0;i<n;i++)
        {
            scanf("%d",&p[i]);
            while(p[i]>450 || p[i]<0)
            {
                printf("\nPeso invalido, introduce uno nuevo:");
                scanf("%d",&p[i]);
            }
            sumat=sumat+p[i];
            
        }

        if(n%2!=0)
        {
            aux=(float)n/2;
            aux=ceil(aux);
            parte1=aux;
            parte2=n-aux;
            for(int i=0;i<parte1;i++)
            {
                sumame=sumame+p[i];
            }
            sumama=sumat-sumame;
            printf("%d %d",sumame, sumama);
        }

        else
        {
            aux2=n/2;
            parte1=aux2;
            parte2=aux2;
            for(int i=0;i<parte1;i++)
            {
                sumame=sumame+p[i];
            }
            sumama=sumat-sumame;
            printf("%d %d",sumame, sumama);
            
        }
        

        cont++;
    }while(cont==x);

    

    return EXIT_SUCCESS;
}
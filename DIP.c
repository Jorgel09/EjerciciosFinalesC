#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int suma1=0,suma2=0,suma3=0,suma4=0,aux1,aux2,aux3,aux4;
    int arr1[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int arr2[]={0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int arr3[]={1,1,0,0,1,0,1,1,1,0,0,0,0,1,0,0,1,1,1,0,0,1,0,1,1,0,0,0,0,0,0,0};
    int arr4[]={0,1,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1};


    aux1=7;
    aux2=7;
    aux3=7;
    aux4=7;
    for(int i=0; i<=8; i++)
    {
        if(arr4[i]==1)
        {
            suma1=suma1+(1*pow(2,aux1));
        }
        else 
            suma1=suma1+0;
    aux1--;        
    }


        for(int i=8; i<=16; i++)
    {
        if(arr4[i]==1)
        {
            suma2=suma2+(1*pow(2,aux2));
        }
        else 
            suma2=suma2+0;
    aux2--;
    }

        for(int i=16; i<=24; i++)
    {
        if(arr4[i]==1)
        {
            suma3=suma3+(1*pow(2,aux3));
        }
        else 
            suma3=suma3+0;
    aux3--;
    }

        for(int i=24; i<=32; i++)
    {
        if(arr4[i]==1)
        {
            suma4=suma4+(1*pow(2,aux4));
        }
        else 
            suma4=suma4+0;
    aux4--;
    }

    printf("%d.%d.%d.%d",suma1,suma2,suma3,suma4);

    return EXIT_SUCCESS;
}
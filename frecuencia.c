#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (){

    int a=0,e=0,i=0,o=0,u=0,con=0;
    //char arr1[]={"Esta frase fue escrita en Ciudad Universitaria"};
    //char arr2[]={"Laboratorio de programacion avanzada"};
    char arr2[100];
    //printf("La longitud de la primera frase es:%d\n",sizeof(arr1));
    //printf("La longitud de la segunda frase es:%d",sizeof(arr2));

    printf("\nIntroduce el texto:");
    scanf("%[^\n]%*c",arr2);
    for(int r=0; r<strlen(arr2);r++)
    {
        if(arr2[r]=='a' || arr2[r]=='A')
            a++;
        else if(arr2[r]=='e' || arr2[r]=='E')
            e++;
        else if(arr2[r]=='i' || arr2[r]=='I')
            i++;
        else if(arr2[r]=='o' || arr2[r]=='O')
            o++;
        else if(arr2[r]=='u' || arr2[r]=='U')
            u++;
        else 
            con++;
    }



    printf("a:%d e:%d i:%d o:%d u:%d",a,e,i,o,u);
    return EXIT_SUCCESS;
}
#include <stdio.h>
#include <stdlib.h>

int main(){

    int z,cont=0,i,j,m,n;
    scanf("%d",&z);

    do{
        scanf("%d %d",&i,&j);

        int A[i][j];

        for(int r=0; r<i; r++){
            for(int c=0; c<j; c++)
            {            
                printf("A(%d,%d)= ",r,c);
                scanf("%d",&A[r][c]);
            }
        }
        
        puts("");
        scanf("%d %d",&m,&n);
        int B[m][n];

    
        for(int r=0; r<m; r++){
            for(int c=0; c<n; c++)
            {            
                printf("B(%d,%d)= ",r,c);
                scanf("%d",&B[r][c]);
            }
        }

        puts("");
        puts("");

        for(int r=0; r<i; r++){
            for(int c=0; c<j; c++)
                {
                    printf("%d\t",A[r][c]);
                }
            puts("");
        }
        
        puts("");
        puts("");


        for(int r=0; r<m; r++){
            for(int c=0; c<n; c++)
                {
                    printf("%d\t",B[r][c]);
                }
            puts("");
        }


        for(int r=0; r<m; r++){
            for(int c=0; c<n; c++)
            {            
                if(B[r][c]==1 && B[r][c+1]==0 && B[r+1][c]==1 && B[r+1][c+1]==1)
                {
                    B[r][c]=2;
                    B[r+1][c]=2;
                    B[r+1][c+1]=2;
                    B[r][c+1]='*';
                }
            }
        }

        puts("");
        puts("");
        puts("");
        puts("");
    
        for(int r=0; r<m; r++){
            for(int c=0; c<n; c++)
                {
                    printf("%d\t",B[r][c]);
                }
            puts("");
        }

    }while(cont==z);

    return EXIT_SUCCESS;
}
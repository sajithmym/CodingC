#include <stdio.h>

void main(){
    int num,ss = 1;
    printf("\n \t * Multiplication Table \n ");

    printf("\n Enter :");
    scanf("%d",&num);

    while (ss != 13)
    {
        printf("\n - %d -",ss*num);
        ss++;
    }

    for(int i=1; i != 13 ; ++i){
        printf("\n for - %d -",i*num);
    }
    
}
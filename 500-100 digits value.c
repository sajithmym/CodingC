#include<stdio.h>

int main()
{   int i,b=-5,add=0,num;
    for(i=500;i<1000;i++){
        num=i;
        while(num!=0) {
            b=num%10;
            num/=10;
            add+=b;
        } 
        printf("\n %d sum digit is %d", i, add);
        add=0;
       // printf("\n\t- - - - - - \n");
        
        /*for (j=0;j!=380116100;j++){
            printf("");
        } */
    } 
    return 0;
}
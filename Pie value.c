#include<stdio.h>

int main()
{   int i=3,e=1;
    float s=1.0;
    while (i!=17) {
        if (e%2 == 1){
           // printf("\n  %f+(%f)=%f",s,-1.0/i,s+(-1.0/i));
            s+=(-1.0/i);
        } 
        else{
           // printf("\n  %f+(%f)=%f",s,1.0/i,s+(1.0/i));
            s+=(1.0/i);
            
        } 
        i+=2;
        e+=1;
    }
    printf("\n pi = %f",s*4);
    return 0;
}
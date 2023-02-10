#include<stdio.h>

int main(){

	char i[]= {'s', 'a', 'j', 'i', 't', 'h' };

    printf("Hello %s", "! How are you..?" );

    int count = sizeof(i) / sizeof(i[0]);

    for (int j=0; j != count ; ++ j)
        printf("\n\ti[%d]-> %c",j,i[j]);

    return 0; 
}
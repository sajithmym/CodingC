#include<stdio.h>

int main()
{   char *p;
    int i,ii;
    char s[]="                                                         Mohamed sajith cool";
    for (p=s;*p!='\0';p++) {
      // putchar (*p) ;
       printf("\n%s  ",p);
       for (i=0;i!=30080116;i++){
            printf("");
        }
        
    } 
    for (ii=0;ii!=16;ii++) {
        for (i=0;i!=30080116;i++){
            printf("");
        }
        printf("\n ");
    } 
    return 0;
}
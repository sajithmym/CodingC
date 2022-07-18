#include<stdio.h>
#include<string.h>
int main()
{   int num[20], i, r;
    char b[300];
    printf("Enter : ");
    scanf("%d",&r);
    for(i=1;i!=13;i++) {
        num[i]=r*i;
        printf("\n%d",num[i]);
    } 
    sprintf(b,"%d", num);
    return 0;
}
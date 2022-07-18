#include<stdio.h>
#include<string.h>
int main()
{   int n[10]={10,20,3,6,89,56,5,567,4,5};
    int f,i;
    char check[3]="km";
    printf("Enter a Integer : ");
    scanf("%d", & f);
    for (i=0;i!=10;i+=1){
        if (n[i]==f) {
            printf("\n\tIndex is %d",i );
            strcpy(check,"ok");
            break;
        } 
    } 
    if(strcmp(check,"ok")) {
        printf ("not in array %d",f);
    } 
    return 0;
}
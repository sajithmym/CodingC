
#include<stdio.h>
#include<string.h>

int main()
{   int a,sum=0,count=0,ok;
    char num[20],sin[10], f, j[56];
    printf("\n Enter a number : ");
    scanf("%d", &a);
    sprintf(num,"%d",a) ;//int to str
    for (count;count!=strlen(num);count++) {
            f=num[count];
            strcpy(j,"0"); //j="0"
            strncat(j,&f,1); //str+char
            sscanf(j,"%d",&ok); //str to int
            sum+=ok;
    }
    printf("\n\tvalue is %d",sum);
    return 0;
}
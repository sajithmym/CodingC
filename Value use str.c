
#include<stdio.h>
#include<string.h>

int main()
{   int a,sum=0,count=0,ok;
    char num[20],sin[10], f='1', j[56]="0";
    printf("\n Enter a number : ");
    scanf("%d", &a);
    if (a<=1000 && a>=0) {
      sprintf(num,"%d",a) ;//int to str
      for (count;count!=strlen(num);count++) {
            f=num[count];
            strncat(j,&f,1);//str+char
            sscanf(j,"%d",&ok);//str to int
            strcpy(j,"0");
            sum+=ok ;
      } 
      printf("\n\tvalue is %d",sum);
    } 
    else 
        { printf("\t Invalid Number... ");
    } 
    return 0;
}
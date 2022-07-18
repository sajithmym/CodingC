#include<stdio.h>

int main()
{   int a,di;int sum=0;
    printf("\n Enter a number : ");
    scanf("%d", &a);
    if (a<=1000 && a>=0) {
      while (a>9) {
        di=a%10;
        a=a/10;
        sum+=di;
      } 
      sum+=a;
      printf("\tvalue is %d", sum);
    } 
    else 
        { printf("\t Invalid Number... ");} 
    return 0;
}
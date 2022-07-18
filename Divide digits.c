#include<stdio.h>

int main()
{   int u, b,n;
    printf("Enter a integer : ");
    scanf("%d", & n);
    while(n!=0){
        b=n%10;
        n/=10;
        printf("\n\t - - - %d - - - ", b);
    }
    return 0;
}
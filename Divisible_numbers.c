#include<stdio.h>

int main()
{   int num,i=1,bal;
    printf("Enter a integer : ");
    scanf("%d",&num);
    printf("\nAll the divisar of %d are : ",num);
    for (i;i!=num+1;i++)
    {   bal=num%i;
        if (bal==0)
            printf("\n%d",i);
    } 
    
    return 0;
}
#include<stdio.h>
#include<math.h>
int a(s,v){
    printf("\tHi %s\n\t",s);
    return pow(v,3);
} 

int main()
{   char n[20];
    int num;
    printf("Enter : ");
    scanf("%s", n);
    printf("\nEnter a integer : ");
    scanf("%d", &num);
    a(n,num); 
    printf("%d", a(n,num));
    printf(" is (%d^3) ",num);
    return 0;
}
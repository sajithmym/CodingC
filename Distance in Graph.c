#include<stdio.h>
#include<math.h>
int main()
{   float d,x, xx, y, yy;

    printf("Enter first point..\n ");
    printf("     X :  ");scanf("%f",&x);
    printf("      y :  ");scanf("%f",&y);
    
    printf("\nEnter Next point..\n ");
    printf("     X :  ");scanf("%f",&xx);
    printf("      y :  ");scanf("%f",&yy);
    
    d=pow((pow(xx-x,2)+pow(yy-y,2)),0.5);
    printf("\n Distance is : %.2f",d);
    return 0;
}
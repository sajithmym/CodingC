#include<stdio.h>
int main()
{   int l[4];
    int a, b, c, d, q, i, x;
    printf("Enter 3 Integers : \n");
    scanf("%d%d%d",&a, &b, &c);
    l[0]=a;
    l[1]=b;
    l[2]=c;
    for (d=0;d!=3;d++) {
        int m=-5000;
        
        for (q=0;q!=3;q++) {
            if (m<l[q]) {
                m=l[q];
            }
        } 
        
        for (x=0;x!=3;x++){
            //printf("\n\t-- %d",l[x]);
            if (l[x] == m) 
                l[x]=-9999;
        } 
        printf("\n   Max %d is %d",d+1,m);
    } 
    return 0;
}
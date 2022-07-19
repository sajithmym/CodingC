#include<stdio.h>

void rev(int);

void main(){
	int s;
	printf("\n Enter : ");
	scanf("%d",&s);
	rev(s);
}

void rev(int s){
	printf("\n%d",s%10);
	if(s/10 != 0)
		rev(s/10);
}
#include<stdio.h>

int main() {
	while (1) {
		int n1=30;int n2=10;
		int add(int,int);
		printf("\n \t Enter two integer numbers...\n");
		printf("Enter : ");
		scanf("%d",&n1);	
		printf("Enter : ");
		scanf("%d",&n2);
		printf("\n\tAddition is %d",add(n1,n2));
	}
	return 0;
}

add(a,b){
	return(a+b);
}

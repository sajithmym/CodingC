#include<stdio.h>
void i(int,int);
int main() {
	int a=5,b=2;
	int p,p2;
	i(&a,&b);
	printf("a value is %d\n b value is %d",a,b);
	return 0;
}
void i(int p,int p2){
	int om=*p;
	*p=*p2;
	*p2=&om;
}
//printf();
//scanf();

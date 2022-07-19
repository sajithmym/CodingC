#include<stdio.h>
void r(int);

void main(){
	r(100);
}

void r(int m){
	if (m>=10){
		printf("%d",m%10);
		r(m/100);
	}
	
	
}

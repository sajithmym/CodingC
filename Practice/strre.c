#include <stdio.h>

void stre();

void main(){
	printf("\nEnter : ");
	stre();
}

void stre(){
	char i;
	scanf("%c",&i);
	if (i!='.')
		stre();
	if(i!='.')
		printf("%c",i);
}
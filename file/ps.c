#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void main(){
	int x,count=0,tot=0;
	FILE *o;
	char d;
	o=fopen("num.txt","r");

	if (o==NULL){
		printf("\n Error found... \n\n");
		exit(1);
	}
	else{
		while (d == '.'){
			putc(d=getchar(),o);
		}
		
	}
	fclose(o);
}
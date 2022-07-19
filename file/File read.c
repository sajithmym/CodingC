#include<stdio.h>
#include <conio.h>
#include <string.h>

void main(){
	FILE *r;
	char m;
	r=fopen("read_file.txt","r");
	if (r == NULL)
		printf("Error Found...\n");
	while (m != '~'){
		fscanf(r,"%c",&m);
		printf("%c",m);
	}

	printf("\n\n\t\t---------- %s. ----------","Read completed..");
	fclose(r);
}
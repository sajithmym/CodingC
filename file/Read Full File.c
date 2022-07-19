#include<stdio.h>
#include <stdlib.h>
#include<conio.h>

        // feof mean end of file...

void main(){
	FILE *f;
	char sajith,n[100];
	printf("\tEnter File name With Extention....\n * Enter :- ");
	scanf(" %[^\n]",n);
	f=fopen(n,"r+");
	printf("\n\n");
	while (!feof(f)){
		fscanf(f,"%c",&sajith);
		printf("%c",sajith);
	}
}
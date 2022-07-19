#include <stdio.h>

void main(){
	FILE *ok;
	int go=5;
	char string[300];
	ok=fopen("cool.txt","r");
	if (ok==NULL)
		go=10;
	while (!feof(ok) && go==5){
		fscanf(ok," %[^\n]",string);
		printf("%s\n", string);
	}
}
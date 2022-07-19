#include<stdio.h>
#include <stdlib.h>
#include<conio.h>

int main() {
	FILE *f,*ve,*read;
	int ok;
	char *str;
	printf(" \t - Enter 0 to close -  ");
	f=fopen("cool.txt","a");
	while(1){
		printf("\n  Enter a Number : ");
		scanf("%d",&ok);
		if (ok==0)
			break;
		fprintf(f, "\n\t%s\n","Multiplication Table....");
		for (int i = 1; i < 13; ++i)
		{
			int v=i*ok;
			fprintf(f," \t -    %d * %d = %d\n",i,ok,v);
		}
		printf("\n  \t ** %d multiplication table write in 'cool.txt' **\n",ok);
	}
	printf("\n  \t\t ** Now you can see 'cool.txt' **\n");
	fclose(f);
	return 0;
}
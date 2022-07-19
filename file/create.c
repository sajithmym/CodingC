#include<stdio.h>
#include<stdlib.h>


void main(){
	FILE *iam;
	iam=fopen("100.txt","w+");
	if (iam==NULL){
		printf("\n -- Pleace Create file First --\n\n");
		exit(1);
	}
	else{
		fprintf(iam, "%s\n", "Mohamed Sajith...");
		fclose(iam);
	}
	printf("\nDone..\n");
}
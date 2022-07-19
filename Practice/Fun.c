#include<stdio.h>

void Down_Counter(int);
void Up_Counter(int,int);

void main(){
	int j;
	char k[100];
	printf("\n Enter a number :");
	scanf("%d",&j);
	Down_Counter(j);

	printf("\n");scanf("%s",k);

	Up_Counter(j,j);
}

void Down_Counter(int i){
	if (i==-1)
		printf("\n Down_Counter Completed.");
	else{
		printf("\n ---------- %d",i);
		Down_Counter(i-1);
	}
}

void Up_Counter(int s,int copy){
	if (s==-1)
		printf("\n Up_Counter Completed.");
	else{
		printf("\n ------- %d ",copy-s);
		Up_Counter(s-1,copy);
	}
}
#include<stdio.h>
int Factorial(int,int);
int main() {
	int num;
	printf("\n\nEnter a Number :- ");
	scanf("%d",&num);
	printf("\n\t\t The Number %d Factorial is %ld\n",num,Factorial(num,1));
	return 0;
}

int Factorial(int Number,int Process){
	if (Number==0)
		return (Process);
	else{
		int copy=Process;
		printf("\n%d * %d = %d",copy,Number,Process);
		Process*=((Number));
		return(Factorial((Number-1),Process));	
	}
}

//printf();
//scanf();

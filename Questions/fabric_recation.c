#include<stdio.h>
int sum(int,int);

int main() {
	int num,count;
	count=1;
	printf("Enter a number : ");
	scanf("%d",& num);
	printf("\t value is : %d ",sum(num,count));
	return 0;
}

int sum(int k,int count){
	if (count==k)
		return(count);
	else{
		return(sum(k,count+1));
	}
}

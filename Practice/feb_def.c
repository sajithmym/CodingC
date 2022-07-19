#include<stdio.h>
int sum(int,int);
int main() {
	for (int i=1;i!=12;i++){
		printf("%d",i);
		printf("\n\t value is : %d ",sum(i,1));
	}
	return 0;
}

int sum(int k,int count){
	if (count==k)
		return(count);
	else
		return(sum(k,count+1));
}
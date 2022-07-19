#include<stdio.h>
int fib(int);

int main() {
	int i=3;
	printf("\n%d Number Fibric value is %d ",i,fib(i));
	for (int i=0;i!=20;i++){
		//if (i>=10)
			//printf("\n%d Number Fibric value is %d ",i,fib(i));
		//else
			//printf("\n %d Number Fibric value is %d ",i,fib(i));
	}
}

int fib(int n){
	int result;
	if ( n==0)
		return (0);
	else if (n==1)
		return(1);
	else{
		result = fib(n-1) + fib(n-2);
		printf("\n %d  -- %d = %d",fib(n-1),fib(n-2),result);
	return (result);
	}	
}

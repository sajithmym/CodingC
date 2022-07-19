#include<stdio.h>
#include<math.h>

int main(){
	int a[10];

	for (int i=0;i<10;++i){
		a[i]=11*i;
	}
	
	for (int i = 1; i < 10; ++i){
		printf("\n i = %d \t a[%d] = %d \t *(a+%d) = %d \t &a[%d] = %p \t a+%d = %p ",i,i,a[i],i,*(a+i),i,&a[i],i,a+i);
	}
}
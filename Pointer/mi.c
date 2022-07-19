#include<stdio.h>
#include <stdlib.h>
#include <memory.h>

void array(int [],int);
void Entry(int [],int);

void main(){
	int iv,limit,*o;

	while (1){
		iv=0;
		printf("\n\nEnter list size : ");
		scanf("%d",&limit);
		if (limit==0)
			break;
		o=(int *) malloc (limit*sizeof(int));
		//int o[limit];    Can Do This Methot Also...
		Entry(o,limit);
		array(o,limit);
		//free(o);   Free The list
	}
}

void array(int k[],int until){
	for (int i = 0; i < until; ++i)
	{
		printf("\n\t\t value *(list+%d) : %d \t\t-- Location &K[%d] : %p",i,*(k+i),i,(k+i));
	}
}

void Entry(int ok[],int limit){
	for (int i = 0; i < limit; ++i)
	{
		*(ok+i)=i*11;
	}
}

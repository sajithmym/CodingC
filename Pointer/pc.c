#include<stdio.h>
#include<string.h>

void main(){
	char *s;
	int count;
	//int list[10],size;
	s="Enter a Value :";

	printf("Enter List Size : ");scanf("%d",&count);
	int list[count];

	for (int i=0;i<count;i++)
	{
		printf("\n\t - List[%d] %s - ",i,s);
		scanf("%d",list+i);

	}

	printf("\n\n");
	for (int i=0;i<count;i++)
	{
		printf("\n \t - value %d :  %d - ",i,*(list+i));
	}
	
	
}

#include<stdio.h>
void main(){
	long result,number,copy_of_result,sample,i;
	copy_of_result=sample=i=0;
	result=1;
	printf("\n Enter a integer : ");
	scanf("%ld",&number);
	if (number==0)
		result=0;
	else if (number==1)
		result=1;
	while (i<(number-1)){
		copy_of_result=result;
		result+=sample;
		sample=copy_of_result;
		i+=1;
	}
	printf("\n\t Value is %ld",result);
}
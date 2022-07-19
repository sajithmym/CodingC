#include<stdio.h>
#include<math.h>
void readValues(float *,float *, float *);
void calculateRoots(float ,float ,float,float*,float*);
void displayRoots(float,float);
void main(){
	float a,b,c,d,z=0,zz=0;
	readValues(&a,&b,&c);
	calculateRoots(a,b,c,&z,&zz);
	displayRoots(z,zz);
}
void readValues(float *p,float *q, float *r){
	printf("enter value for a (a cannot be 0):");
	scanf("\n %f",p);
	printf("enter value for b:");
	scanf("\n %f",q);
	printf("enter value for c:");
	scanf("\n %f",r);
}
void calculateRoots(float a,float b, float c,float *x,float *y){
	float d=(b*b)-(4*a*c);
	printf("%f",d);
	if (a==0)
		printf("\n Invalid ");
	else if(d>=0){
		*x=(-b)+(sqrt(d))/(2*a);
		printf("%f\n",-b );
		*y=(-b)-(sqrt(d))/(2*a);
	}
	else 
		printf("\n This is not in quayratic form");
}
void displayRoots(float x,float y){
	printf("\n Value 1: %f",x);
	printf("\n Value 2: %f",y);
}
#include<stdio.h>

int r;float a;

int in();float pro();void x();

int main() {	

while (r!=-1){
	printf("\n\t\tWelcome...\n");
	printf("\tEnter radious : ");
	in();
	pro();
	x();
}
	return 0;
}
int in(){
	extern int r;
	scanf("%d",&r);
	return r;
}

float pro(){
	extern float a;
	float p=(22/7.0);
	a=p*r*r;
	return (p*r*r);
}

void x(){
	extern int r;
	extern float a;
	printf("\n\t\tR is %d Rrea is %.2f  ",r,a);
	printf("\n");
}

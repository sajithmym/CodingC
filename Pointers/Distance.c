#include <stdio.h>

typedef struct
{
	// 1 feet 12 inches...
	int f;
	int in;
}Dis;

void input(Dis *);
void process(Dis,Dis,Dis *);
void Display(Dis);

void main(){
	printf("\n \t - Welcome -   (1 feet 12 inches...)");
	Dis D1,D2,tot;
	printf("\n\t\t 1st Value ---");
	input(&D1);
	printf("\n\t\t 2nd Value ---");
	input(&D2);
	process(D1,D2,&tot);
	Display(tot);
}

void input(Dis *sample){
	printf("\n Enter the Feet :");scanf("%d",&sample->f);
	while (1){
		printf(" Enter the Inches :");scanf("%d",&sample->in);
		if (((sample->in)>=12) || ((sample->in)<=-1)){
			printf("\n\t - Invalid Input Inch is (0 to 12) range... -\n");
			continue;
		}
		break;
	}
	printf("\n");
}

void process(Dis one,Dis two,Dis *exc){
	int ff=0;
	exc->f=one.f+two.f;
	exc->in=one.in+two.in;
	ff=(exc->in)/12;
	exc->in=(exc->in)%12;
	exc->f+=ff;
	printf("\n");
}

void Display(Dis out){
	printf("\t Totel is %d feet, %d Inches",out.f,out.in);
}

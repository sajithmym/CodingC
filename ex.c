#include<stdio.h>

int main() {
	int x=10,y=18;
	int *p,*l;
	p=&x;
	l=&y;
	printf("\n \t%%p *p is- %p",*p);
	printf("\n \t%%d *p is- %d",*p);
	printf("\n \t%%p p is- %p",p);
	printf("\n \t%%d p is- %d",p);
	
	printf("\n\n \t%%p *l is- %p",*l);
	printf("\n \t%%d *l is- %d",*l);
	printf("\n \t%%p l is- %p",l);
	printf("\n \t%%d l is- %d",l);
	*p+=5;
	printf("\n \t x value %d. \n \t y Value %d.",x,y);
	getchar();
	return 0;
}

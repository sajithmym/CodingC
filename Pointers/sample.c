#include<stdio.h>

typedef struct{
	int no;
	char *n;
	float salary;
}my;

int main() {
	char *i,*ok;
	ok = "Sajith Cool...";
	printf("\n %s",ok);
	my one={1," -                      Mohamed Sajith",65000.50689},*c=&one;
	printf("\n\t Number is %d",one.no);
	printf("\n %s...",c->n);
	printf("\n %s...",one.n);
	printf("\n %s...",(*c).n);
	printf("\n salary is %.3f",c->salary);
	printf("\n\n\n");
	for (i=c->n; *i!='S'; i++)
	{
		printf("\n \t\t %s",i);
	}
	printf("\n %c",*((*c).n+1));
	printf("\n %c",*(one.n+1));
	printf("\n %c",one.n[1]);
	printf("\n %c",*(c->n+1));
	return 0;
}

//printf();
//scanf();

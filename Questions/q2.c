#include<stdio.h>
#include<string.h>

typedef struct{
	int no[100];
	float side_1[100],side_2[100],side_3[100];
	char type[100][100];
}Triangles_information;

void get_sides(float *,float *,float *);
void chech(float,float,float,char *);
void right_triangle(float,float,float,char *);
void Append(int,float,float,float,char *,Triangles_information *);
void show_output(Triangles_information,int);

void main(){
	Triangles_information list;
	char loop='Y',find;
	float s1,s2,s3;
	int count=0;
	
	while (loop!='S' && loop!='s'){
		find='j';
		get_sides(&s1,&s2,&s3);
		chech(s1,s2,s3,&find);
		Append(count,s1,s2,s3,&find,&list);
		
		printf("\n\n       Enter ('S' or 's') to stop.");
		printf("\n\t  Enter any letter to Input Another..");
		printf("\n\n\t\t\t  Enter :- ");scanf(" %c",&loop);
		count++;
	}
	show_output(list,count);
}

void show_output(Triangles_information showing,int count){
	printf("\n\n \t\t  - Triangle Details - ");
	for(int i=0;i!=count;i++){
		printf(" \n   ******************* ---------- ********************************");
		printf("\n    This is Triangle Number %d",showing.no[i]+1);
		printf("\n\n\t ---- Side 1 value : %.2f ",showing.side_1[i]);
		printf("\n\t ---- Side 2 value : %.2f ",showing.side_2[i]);
		printf("\n\t ---- Side 3 value : %.2f ",showing.side_3[i]);
		printf("\n\n\t\t     Type : %s ",showing.type[i]);
		printf("\n\n");
	}
	printf("    ****************************** Program Finesh. *************************");
}

void get_sides(float *first,float *second,float *third){
	printf("\n    Enter lenth of the Triangle...\n");
	printf("\n\t - side 1 :- ");scanf("%f",first);
	printf("\n\t - side 2 :- ");scanf("%f",second);
	printf("\n\t - side 3 :- ");scanf("%f",third);
}

void chech(float one ,float two ,float three,char *show){
	int correct=0;
	if ((one+two)>three)
		correct+=1;
	if ((one+three)>two)
		correct+=1;
	if ((two+three)>one)
		correct+=1;
	if (correct==3){
			if (one==two && one==three)
				*show='e';	
			else if (one==two || one==three || two==three)
				*show='i';		
			else
				right_triangle(one,two,three,show);	
	}
	else 
		*show='N';
}

void right_triangle(float one,float sec,float third,char *cheaking){
	if ((one*one)+(sec*sec)==(third*third)){
		*cheaking='r';
	}
	else if ((one*one)+(third*third)==(sec*sec)){
		*cheaking='r';
	}
	else if ((sec*sec)+(third*third)==(one*one)){
		*cheaking='r';
	}	
}

void Append(int n,float first,float sec ,float third,char *ok,Triangles_information *access)
{
	access->no[n]=n;
	access->side_1[n]=first;
	access->side_2[n]=sec;
	access->side_3[n]=third;
	if (*ok=='e')
		strcpy(access->type[n],"An Equilateral Triangle..");
	else if (*ok=='i')
		strcpy(access->type[n],"An Isosceles Triangle..");
	else if (*ok=='N')
		strcpy(access->type[n],"This is Not a Triangle..");
	else if (*ok=='r')
		strcpy(access->type[n],"An Right Triangle..");
	else
		strcpy(access->type[n],"This is a Scalene Triangle..");
}

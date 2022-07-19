#include<stdio.h>
#include <string.h>

typedef struct{
	int day;
	int month;
	int year;
}DD;

typedef struct{
	char name[30];
	int age;
	char grade[30];
	DD Dob;
}student;

void input(student *,int);
void Write(student,int,FILE *);

void  main(){
	FILE *ok;int c=1;char ch[20];
	ok=fopen("student Details.txt","w");
	student student_Structure,s={"sajith",20,"1st",6,12,1999};

	while(1){
		input(&student_Structure,c);
		Write(student_Structure,c,ok);
		++c;
		printf("\n Enter 'q' to Finish...\n   Enter :- ");
		scanf("%s",ch);
		if (!strcmp(ch,"q"))
			break;
	}
	fclose(ok);
}

void input(student *s,int count){
	printf("\n\t - - This is student %d - -\n",count);
	printf("\n%s", "Enter Your name : ");
	scanf(" %[^\n]",s->name);
	printf("%s", "Enter Your age : ");
	scanf("%d",&s->age);
	printf("%s", "Enter Your Grade : ");
	scanf(" %[^\n]",s->grade);
	printf("%s", "Enter Your Birth Day (dd mm yyyy) : ");
	scanf("%d %d %d",&s->Dob.day,&s->Dob.month,&s->Dob.year);	
}

void Write(student student_Structure,int count,FILE *omg){
	fprintf(omg,"\n\n\t - - This is student %d - -\n",count);
	fprintf(omg,"\nName is - %s\n",student_Structure.name);
	fprintf(omg,"Age is - %d\n",student_Structure.age);
	fprintf(omg,"Grade is - %s\n",student_Structure.grade);
	fprintf(omg,"Date of Birth is  %d/%d/%d. \n",student_Structure.Dob.day,student_Structure.Dob.month,student_Structure.Dob.year);
	fprintf(omg,"**********************************************************************");
}
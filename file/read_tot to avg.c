#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void main(){
	int x,count=0,tot=0;
	FILE *o;
	char d;
	o=fopen("num.txt","r");

	if (o==NULL){
		printf("\n Error found... \n\n");
		exit(1);
	}
	else{
		while (1){
			fscanf(o,"%c",&d);
			//printf("%c\n",d);
			if (d == ',')
				continue;
			if (d=='.')
				break;
			x=d-'0';
			tot=tot+x;
			count+=1;
			//printf("%d\n",x);
		}
		printf("\n \t - Totel is : %d \n\t - Count is : %d",tot,count);
		printf("\n \t - Average is : %d ",tot/count);
	}
	fclose(o);
}


/*void convert(){
	int x;char *d;
	sscanf("10","%d",&x);
	printf("Change : %d :\n",x );
		
	x=100;

	sprintf(d,"%d",x);
	printf("String is : %s : \n",d );
}*/
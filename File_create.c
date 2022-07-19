#include<stdio.h>
#include<conio.h>
int main()
{   FILE *fp;int c=1;
    fp=fopen("ok.txt","w");
    fprintf(fp,"\t\t\tWelcome ");
    fprintf(fp,"\n");
    if (fp==NULL) 
        printf("omg... ");
    else{
        printf("file is ok.. ");
    } 
    while(c<=11){
        fprintf(fp,"\t\t\t- \t iii -\t \n");
        c+=1;
    } 
    fprintf(fp,"\t\t\t\t\t\t\t\t\t\tby: « SaJiTh » \t %d \n ",c);
    fclose(fp);
    return 0;
}

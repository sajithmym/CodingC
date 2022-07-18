#include<stdio.h>

int main()
{   char i[51];
    printf("Enter pass code :- ");
    scanf("%s",i);
    printf("\n\t%s",(!strcmp(i,"q"))?"\n\tHi sajith\n\t\t 👌👌👌👌":"\n\twho are you...\n\t\t oops! " );
    return 0;
}
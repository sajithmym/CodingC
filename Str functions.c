#include<stdio.h>
#include<string.h>

int main()
{   char s[20], b[20];
    printf ("Enter : ") ;
    scanf("%s",s);
    printf ("\nEnter : ") ;
    scanf("%s",b);
    printf("\nFirst String is :- %s", s) ;
     printf("\nSecond String is :- %s", b) ;
      strcpy(s,b) ; 
   printf("\n\n\tstrcpy: %s", s);
    printf("\n\tstrcat  : %s", strcat(s, b) ) ;
    printf("\n\tstrlen s: %d", strlen(s));
   printf("\n\tstrcmp : %d", strcmp(s, b) );
   printf("\n\nFirst String is :- %s", s) ;
   printf("\nSecond String is :- %s", b) ;
    printf ("\n\n") ;
    return 0;
}
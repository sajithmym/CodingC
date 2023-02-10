#include <stdio.h>
#include <stdlib.h>

void show_str(char *ok)
{
    printf("\n ( In  Inside of the Function ) The String is :- %s", ok);
}

void show_int(int *ok)
{
    printf("\n ( In  Inside of the Function ) The Number is :- %d", *ok);
    *ok = 100;
}

void main()
{
    int *num;
    char *s = "This is my project";
    show_str(s);
    show_int(&num);
    printf("\n I am Out side of Function Num : %d",num);
}
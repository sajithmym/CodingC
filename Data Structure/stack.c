#include <stdio.h>
#include <stdlib.h>

#define mx 20

typedef enum {False,True} Logic;
typedef char e;

typedef struct {
    int i;
    e data[mx];
}Stack;

void create(Stack *s){
    s->i = -1;
}

Logic Empty(Stack *s){
    return (s->i == -1);
}

Logic Full(Stack *s){
    return (s->i == (mx-1));
}

void destroy(Stack *s){
    free(s);
}

void push(Stack *s,e item){
    if (Full(s)){
        printf("\n  -  -  - Stack is Full  -  -  -\n");
    }else{
        s->data[++s->i] = item;
    }
}

void pop(Stack *s,e *value){
    if (Empty(s)){
        printf("\n  -  -  - Stack is Empty  -  -  -\n");
        *value = -99;
    }else{
        *value = s->data[s->i--];
    }
}

void main(){
    // printf("\n------------------------------------------------------------- \n");
    // printf("\t ---> 1 to Push\n");
    // printf("\t ---> 2 to Pop\n");
    // printf("\t ---> 3 to Destroy\n");
    // printf("\t ---> 0 to Exit\n");
    // printf("----------------------------------------------------------------- \n");
    // int pop_value,push_value,input,count = 10;
    // Stack one,test;
    // create(&one);

    // create(&test);


    // while (True) {
    //     printf("\n Enter Your Choice :: ");
    //     scanf("%d",&input);

    //     if (input == 0)
    //         break;
    //     else if (input == 1)
    //         push(&one,count);
    //     else if (input == 2){
    //         pop(&one,&pop_value);
    //         if (pop_value == -99)
    //             printf("\n Can't Proceed.\n");
    //         else
    //             printf("\n The Pop value is %d",pop_value);
    //     }else if (input == 3)
    //         destroy(&one);
    //     count+=5;
    // }

    Stack play;
    char *str,value[50],j;
    create(&play);
    printf("\n Enter a String : ");
    scanf(" %[^\n]",value);

    for (str=value;*str!='\0';++str){
        push(&play,*(str));
    }

    while (!Empty(&play)){
        pop(&play,&j);
        printf("\t ---> %c <-----\n",j);
    }

    // int f[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19},*ok; 
    // for (ok = f;*ok != '\0';++ok){
    //     printf("\t\t ---> %d <-----\n",*ok);
    // }
}

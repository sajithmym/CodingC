#include <stdio.h>

int main(){
    while(1){
        char favoriteDairyProduct[30];
        printf("Enter pass word :-") ; 
        scanf("%s",favoriteDairyProduct);
        if(!strcmp(favoriteDairyProduct,"ok") ){
            printf("\n******************************************\n\tYou are correct\n******************************************\n");
        }
        else{
            printf("\ntry again.\n");
        }
    }
    return 0;
}
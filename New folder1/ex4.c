#include<stdio.h>
int main(){
    char s;
    printf("Do you want to continue (y/n)?:\n");
    scanf("%c",&s);
    if(s!='y' && s!='n'){
        while(s!='y' && s!='n'){
        printf("Response not recognized, try again.\n");
        printf("Do you want to continue (y/n)?:\n");
        scanf(" %c",&s);
    }
    }
    if(s=='y'){
        printf("Thank-you, continuing program...\n");
    
    }
    if(s=='n'){
        printf("Thank-you, exiting program...\n");
    
    }
    
    return 0;
}

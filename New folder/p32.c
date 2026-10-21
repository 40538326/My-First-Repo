#include <stdio.h>
int main(){
    char day;
    printf("Enter a day (Mon/Tue/Wed/Thu/Fri/Sat/Sun) :  ");
    scanf(" %c", &day);
    switch(day){
        case 'M':case 'm':
            printf("The day number is :1\n");
            break;
        case 'W':case 'w':
            printf("The day number is :3 \n");
            break;
        case 'F':case 'f':
            printf("The day number is :5\n");
            break;
        if (day == 'T' || day == 't'){
            printf("u/h?");
            char choice;
            scanf(" %c", &choice);
            if (choice == 'u' || choice == 'U'){    
                printf("The day number is :2\n");
            } else if (choice == 'h' || choice == 'H'){
                printf("The day number is :4\n");
            }
        }
        if (day == 'S' || day == 's'){
            printf("a/u?");
            char choice;
            scanf(" %c", &choice);
            if (choice == 'a' || choice == 'A'){    
                printf("The day number is :6\n");
            } else if (choice == 'u' || choice == 'U'){
                printf("The day number is :7\n");
            }
        }
    }
}
#include <stdio.h>
int main(){
    char grade;
    scanf("%c", &grade);
    if (grade == 'A' || grade == 'a'){
        printf("Your performance was Excellent\n");
    }
    else if (grade == 'B' || grade == 'b'){
        printf("Your performance was Good\n");
    }
    else if (grade == 'C' || grade == 'c'){
        printf("Your performance was Average\n");
    }
    else if (grade == 'D' || grade == 'd'){
        printf("Your performance was Poor\n");
    }
    else if (grade == 'E' || grade == 'e'){
        printf("Your performance was Failing\n");
    }
    return 0;
}
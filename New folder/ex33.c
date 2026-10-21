#include <stdio.h>
int main(){
    int score;
    scanf("%d", &score);
    if (score > 50 ){
        printf("Variable reset to 1\n");
    }
    else{
        printf("Variable reset to 0\n");
    }
    return 0;
}
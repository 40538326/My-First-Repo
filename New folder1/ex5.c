#include<stdio.h>
int main(){
    int i,a;
    printf("Enter times-table to generate : ");
    scanf("%d",&i);
    a = 1;
    while(a<=12){
        printf("%d x %d = %d\n",i,a,i*a);
        a++;
    }
    return 0;
}
/*Exercises/Projects 4 Loops*/
/*E4.6 Solution*/
#include <stdio.h>
int main()
{
int num=-1 /*initial value to avoid randon setting to 0*/;
int n,factorial;
/*ensure positive number*/
while (num<0) {
    printf("Enter positive integer number : ");
scanf("%d",&num);


}
if (num==0)
{
    printf("\n0! = 1\n");

}
else
{
factorial=1;
for (n=1;n<=num;n++) factorial*=n;
    printf("\n%d! = %d\n",num,factorial);
}
return 0;
}
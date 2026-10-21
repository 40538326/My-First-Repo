#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    if (num > 0) {
        printf("The number is positive.\n");
    } else {
        printf("The number is not negative.\n");
    }
    return 0;
}